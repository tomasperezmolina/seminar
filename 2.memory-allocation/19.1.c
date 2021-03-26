#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

typedef struct node {
    void *data;
    struct node *next;
} node;

typedef struct list {
    node *head;
    node *tail;
    unsigned int length;
} list;

// Create empty list
list *empty() {
    list *result = (list *) malloc(sizeof(list));
    result->head = NULL;
    result->tail = NULL;
    result->length = 0;
    return result;
}

// Create list node
node *create_node(void *data) {
    node *result = (node *) malloc(sizeof(node));

    result->data = data;
    result->next = NULL;
	
	return result;
}

void add_to_empty_list(list *l, void *data) {
    node *new_node = create_node(data);
    l->head = new_node;
    l->tail = new_node;
    l->length++;
}

// Add an element to the end of the list.
void add_last(list *l, void *data) {
    if (!l->length) 
        return add_to_empty_list(l, data);

    node *new_node = create_node(data);
    l->tail->next = new_node;
    l->tail = new_node;
    l->length++;
}

// Add an element to the start of the list.
void add_first(list *l, void *data) {
    if (!l->length) 
        return add_to_empty_list(l, data);

    node *new_node = create_node(data);
    new_node->next = l->head;
    l->head = new_node;
    l->length++;
}

// Add an element to the list at the given position.
// If the position is larger than the length of the list, the element is added at the end of the list.
void add_element(list *l, unsigned int pos, void *data) { 
    // Empty list
    if (!l->length) 
        return add_to_empty_list(l, data);

    // Add element at the start.
    if (pos == 0)
        return add_first(l, data);

    // Add element at the end.
    if (pos >= l->length)
        return add_last(l, data);

    // Position in the middle of the list. Traverse the list to find where to store the node.
    node *prev = l->head;
    for (int i = 0; i < pos-1; i++)
        prev = prev->next;

    node *next = prev->next;
    node *new_node = create_node(data);
    new_node->next = next;
    prev->next = new_node;

    l->length++;
}

// Remove the first element of the list.
// The address pointed to by data will be filled with the contents of the removed node.
void remove_first(list *l, void **data) {
    if (!l->length) {
        *data = NULL;
        return;
    }

    node *to_remove = l->head;
    *data = to_remove->data;
    l->head = to_remove->next;
    l->length--;
    free(to_remove);
}

// Remove the last element of the list.
// The address pointed to by data will be filled with the contents of the removed node.
void remove_last(list *l, void **data) {
    if (!l->length) {
        *data = NULL;
        return;
    }

    if (l->length == 1) {
        *data = l->head->data;
        free(l->head);
        l->head = NULL;
        l->tail = NULL;
        l->length = 0;
        return;
    }

    node *prev = l->head;
    node *curr = l->head->next;
    while (curr->next) {
        prev = curr;
        curr = curr->next;
    }

    prev->next = NULL;
    l->tail = prev;
    l->length--;
    *data = curr->data;
    free(curr);
}

// Remove an element at the given position in the list.
// The address pointed to by data will be filled with the contents of the removed node.
// If the position is larger than the length of the list, the last element is removed.
// If no element could be removed, data is set to NULL.
void remove_element(list *l, unsigned int pos, void **data) {
    if (!l->length) {
        *data = NULL;
        return;
    }

    if (pos == 0)
        return remove_first(l, data);

    if (pos >= l->length - 1)
        return remove_last(l, data);

    node *prev = l->head;
    for (int i = 0; i < pos-1; i++)
        prev = prev->next;

    node *to_remove = prev->next;
    node *next = to_remove->next;

    prev->next = next;
    *data = to_remove->data;
    free(to_remove);
    l->length--;
}

// Get the data element at the given position of the list.
void *get_element(list *l, unsigned int pos) {
    node *curr_node = l->head;
    int curr_pos = 0;
    while (curr_node && curr_pos < pos) {
        curr_node = curr_node->next;
        curr_pos++;
    }
    if (curr_pos == pos) return curr_node->data;
    else return NULL;
}

// Get the length of the list.
unsigned int length(list *l) {
    return l->length;
}

// -----------------------------------

void print_numbers(list *l) {
    if (!l->length) 
        printf("Empty list\n");

    node *curr = l->head;
    while(curr) {
        printf("%d, ", *(int*) curr->data);
        curr = curr->next;
    }
    printf("\n");
}

void test_add_element() {
    printf("----TEST ADD ELEMENT----\n");

    list *test = empty();
    printf("List length: %d\n", length(test));
    print_numbers(test);
    for (int i = 0; i < 5; i++) {
        int *val = malloc(sizeof(int));
        *val = i;
        add_element(test, i, val);
        printf("List length: %d\n", length(test));
        print_numbers(test);
    }
    printf("---------------\n");

    int *five = malloc(sizeof(int));
    *five = 5;
    add_element(test, 3, five);
    printf("List length: %d\n", length(test));
    print_numbers(test);
    printf("---------------\n");

    int remove_order[] = {3, 2, 2, 1, 0, 1};
    for (int i = 0; i < 6; i++) {
        int *removed;
        remove_element(test, remove_order[i], (void **) &removed);
        printf("Removed: %d\n", *removed);
        free(removed);
        printf("List length: %d\n", length(test));
        print_numbers(test);
    }
    free(test);
}

void test_add_first() {
    printf("----TEST ADD FIRST----\n");

    list *test = empty();
    printf("List length: %d\n", length(test));
    print_numbers(test);
    for (int i = 0; i < 10; i++) {
        int *val = malloc(sizeof(int));
        *val = i;
        add_first(test, val);
        printf("List length: %d\n", length(test));
        print_numbers(test);
    }
    printf("---------------\n");

    print_numbers(test);
    while(test->length) {
        int *removed;
        remove_first(test, (void **) &removed);
        free(removed);
        printf("List length: %d\n", length(test));
        print_numbers(test);
    }
    free(test);
}

void test_add_last() {
    printf("----TEST ADD LAST----\n");

    list *test = empty();
    printf("List length: %d\n", length(test));
    print_numbers(test);
    for (int i = 0; i < 10; i++) {
        int *val = malloc(sizeof(int));
        *val = i;
        add_last(test, val);
        printf("List length: %d\n", length(test));
        print_numbers(test);
    }
    printf("---------------\n");

    print_numbers(test);
    while(test->length) {
        int *removed;
        remove_last(test, (void **) &removed);
        free(removed);
        printf("List length: %d\n", length(test));
        print_numbers(test);
    }
    free(test);
}

void test_get_element() {
    printf("----TEST GET ELEMENT----\n");

    list *test = empty();
    for (int i = 0; i < 10; i++) {
        int *val = malloc(sizeof(int));
        *val = i;
        add_first(test, val);
        printf("List length: %d\n", length(test));
    }

    for(int i = 0; i < length(test); i++) {
        printf("list[%d] = %d\n", i, *(int *) get_element(test, i));
    }

    while(test->length) {
        int *removed;
        int curr_length = length(test);
        remove_first(test, (void **) &removed);
        printf("List length: %d\n", length(test));
        free(removed);
    }
    free(test);
}

void test_remove_empty_list() {
     printf("----TEST REMOVE EMPTY LIST----\n");

    list *test = empty();
    printf("List length: %d\n", length(test));

    void *removed;
    remove_element(test, 54, &removed);
    if (!removed) {
        printf("Remove element from empty list is null\n");
    }

    remove_last(test, &removed);
    if (!removed) {
        printf("Remove last from empty list is null\n");
    }

    remove_first(test, &removed);
    if (!removed) {
        printf("Remove first from empty list is null\n");
    }
    free(test);
}

typedef struct Point2D {
    int x;
    int y;
} Point2D;

int main(int argc, char const *argv[])
{
    test_add_element();
    printf("-----------------------\n");
    test_add_first();
    printf("-----------------------\n");
    test_add_last();
    printf("-----------------------\n");
    test_get_element();
    printf("-----------------------\n");
    test_remove_empty_list();
    printf("-----------------------\n");

    list *points = empty();
    Point2D a = {5, 5};
    Point2D b = {0, 0};
    Point2D c = {1, 4};

    add_last(points, &a);
    add_last(points, &b);
    add_last(points, &c);

    node *curr = points->head;
    while(curr) {
        Point2D *p = (Point2D *) curr->data;
        printf("Point2D{x: %d, y: %d}\n", p->x, p->y);
        curr = curr->next;
    }

    while(points->length) {
        void *removed;
        remove_last(points, &removed);
    }
    free(points);

    printf("-----------------------\n");

    list *numbers = empty();
    int one = 1;
    int fifty = 50;
    int eighty = 80;

    add_last(numbers, &a);
    add_last(numbers, &b);
    add_last(numbers, &c);

    node *curr_n = numbers->head;
    while(curr_n) {
        int *n = (int *) curr_n->data;
        printf("%d\n", *n);
        curr_n = curr_n->next;
    }

    while(numbers->length) {
        void *removed;
        remove_last(numbers, &removed);
    }
    free(numbers);

    return 0;
}
