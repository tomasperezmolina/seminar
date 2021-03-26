#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/*
    Price stringified as something like: XXXX.XX
    It will break for prices/quantities that are too high or shopping list total values that are too high.
    Just an example, don't use it in production.
*/ 
#define MAX_PRICE_STR_LEN 7 

#define MAX_QUANTITY 9999
#define MAX_QUANTITY_STR_LEN 4

typedef struct item {
    char *name;
    float price;
} item;

typedef struct shopping_list {
    float total;                // Total value of the list
    item *items;                // Items in the list
    unsigned int *quantities;   // Quantity bought of each item, 0 quantity = free space
    unsigned int alloc_size;    // Amount of spaces allocated in the arrays
} shopping_list;

shopping_list create_shopping_list(unsigned int initial_size) {
    shopping_list res = {
        .total = 0,
        .items = malloc(sizeof(item) * initial_size),
        .quantities = calloc(initial_size, sizeof(int)),
        .alloc_size = initial_size,
    };
    return res;
}

void destroy_shopping_list(shopping_list *list) {
    free(list->items);
    free(list->quantities);
}

int find_first_free_index(shopping_list *list) {
    for (unsigned int i = 0; i < list->alloc_size; i++) {
        if (list->quantities[i] == 0) {
            return i;
        }
    }
    return -1;
}

int add_item(shopping_list *list, item *new_item, unsigned int quantity) {
    if (quantity > MAX_QUANTITY) return 1;

    int free_index = find_first_free_index(list); 

    if (free_index == -1) {
        // No space left, need to grow the arrays
        unsigned int prev_size = list->alloc_size;
        list->alloc_size = prev_size * 2; // It's standard to double the memory allocations when there is no space left.
        list->items = realloc(list->items, sizeof(item) * list->alloc_size);
        list->quantities = realloc(list->quantities, sizeof(int) * list->alloc_size);

        // Realloc does not guarantee 0 filled memory, so we need to set it manually
        for (unsigned int i = prev_size; i < list->alloc_size; i++) {
            list->quantities[i] = 0;
        }

        // The free index will be the first in the new allocation
        free_index = prev_size;
    }

    list->items[free_index] = *new_item;
    list->quantities[free_index] = quantity;
    list->total += new_item->price * quantity;

    return 0;
}

void remove_item(shopping_list *list, char *name) {
    for(unsigned int i = 0; i < list->alloc_size; i++) {
        if(list->quantities[i] && (strstr(list->items[i].name, name) != NULL)) {
            list->total -= list->items[i].price * list->quantities[i];
            list->quantities[i] = 0;
        }
    }
}

char *shopping_list_to_string(shopping_list *list) {
    size_t string_size = 0;
    for (unsigned int i = 0; i < list->alloc_size; i++) {
        if (list->quantities[i]) {
            string_size += strlen(list->items[i].name) + 1 + MAX_PRICE_STR_LEN + 1; // Name of item + \t + price + \n
            string_size += 2 + MAX_QUANTITY_STR_LEN + 1 + MAX_PRICE_STR_LEN + 1; // \t + X + quantity + \t + price + \n
        }
    }
    // Empty list
    if (string_size == 0) {
        const char *empty_list_str = "Empty shopping list!";
        return strdup(empty_list_str); // Malloc it so it can be freed like the regular output.
    }

    const char *total_str = "----------------\nTotal:\t";
    string_size += strlen(total_str) + MAX_PRICE_STR_LEN + 1; // Total: + total_price + \0

    char *result = malloc(string_size);
    size_t chars_written = 0;

    for (unsigned int i = 0; i < list->alloc_size; i++) {
        if (list->quantities[i]) {
            chars_written += snprintf(
                result + chars_written, 
                string_size - chars_written, 
                "%s\t%.2f\n", list->items[i].name, list->items[i].price
            );
            chars_written += snprintf(
                result + chars_written, 
                string_size - chars_written, 
                "\tX%d\t%.2f\n", list->quantities[i], list->items[i].price * list->quantities[i]
            );
        }
    }

    chars_written += snprintf(
        result + chars_written, 
        string_size - chars_written, 
        "%s%.2f", total_str, list->total
    );

    return result;
}

void print_shopping_list(shopping_list *list) {
    char *str = shopping_list_to_string(list);
    printf("%s\n", str);
    free(str);
    printf("----------------\n");
}


int main(int argc, char const *argv[])
{
    shopping_list list = create_shopping_list(1);
    item apples = {"Apples", 5};
    item bananas = {"Bananas", 8};
    item eggs = {"Eggs (dozen)", 12};
    item water = {"Water (1L)", 2};

    printf("Empty list:\n");
    print_shopping_list(&list);

    getchar();
    printf("Add 2 Apples:\n");
    add_item(&list, &apples, 2);
    print_shopping_list(&list);

    getchar();
    printf("Add 1 Banana:\n");
    add_item(&list, &bananas, 1);
    print_shopping_list(&list);

    getchar();
    printf("Add 2 dozen eggs:\n");
    add_item(&list, &eggs, 2);
    print_shopping_list(&list);

    getchar();
    printf("Get rid of the bananas:\n");
    remove_item(&list, "Banana");
    print_shopping_list(&list);

    getchar();
    printf("Add 6 bottles of water:\n");
    add_item(&list, &water, 6);
    print_shopping_list(&list);

    destroy_shopping_list(&list);

    return 0;
}
