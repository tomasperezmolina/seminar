#include <stdio.h>

#define BUFFER_SIZE 50

typedef struct message {
    void (*process)(struct message *);
} message;

typedef struct login_message {
    void (*process)(struct message *);
    char username[BUFFER_SIZE];
    char password[BUFFER_SIZE];
} login_message;

typedef struct register_message {
    void (*process)(struct message *);
    char username[BUFFER_SIZE];
    char password[BUFFER_SIZE];
    char email[BUFFER_SIZE];
    unsigned int age;
} register_message;

typedef struct upload_profile_pic_message {
    void (*process)(struct message *);
    char path[BUFFER_SIZE];
} upload_profile_pic_message;

void process_login(message *msg) {
    login_message *this = (login_message *) msg;
    printf("Login message received:\n");
    printf("Data: { username: %s, password: %s }\n", this->username, this->password);
}

void process_register(message *msg) {
    register_message *this = (register_message *) msg;
    printf("Register message received:\n");
    printf("Data: { username: %s, password: %s, email: %s, age: %d }\n", this->username, this->password, this->email, this->age);
}

void process_upload_profile_pic(message *msg) {
    upload_profile_pic_message *this = (upload_profile_pic_message *) msg;
    printf("Upload profile picture message received:\n");
    printf("Data: { path: %s }\n", this->path);
}

void process_messages(message **messages, unsigned int size) {
    for(unsigned int i = 0; i < size; i++) {
        messages[i]->process(messages[i]);
        printf("-----------------\n");
    }
}

int main(int argc, char const *argv[])
{
    message *messages[5];
    
    login_message login_msg = {
        .process = &process_login,
        .username = "hello", 
        .password = "secret"
    };
    register_message register_msg = {
        .process = &process_register,
        .username = "john", 
        .password = "12345", 
        .email = "john@gmail.com", 
        .age = 24
    };
    register_message register_msg2 = {
        .process = &process_register,
        .username = "michael", 
        .password = "password", 
        .email = "mike@hotmail.com", 
        .age = 15
    };
    upload_profile_pic_message upload_profile_pic_msg = {
        .process = &process_upload_profile_pic,
        .path = "imgur.com/blablabla"
    };
    login_message login_msg2 = {
        .process = &process_login,
        .username = "john", 
        .password = "12345"
    };

    messages[0] = (message *) &login_msg;
    messages[1] = (message *) &register_msg;
    messages[2] = (message *) &register_msg2;
    messages[3] = (message *) &upload_profile_pic_msg;
    messages[4] = (message *) &login_msg2;

    process_messages(messages, 5);

    return 0;
}