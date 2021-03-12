#include <stdio.h>

#define BUFFER_SIZE 50

typedef enum type {
    LOGIN, REGISTER, UPLOAD_PROFILE_PIC,
} type;

typedef struct base_message {
    type msg_type;
} base_message;

typedef struct login_message {
    type msg_type;
    char username[BUFFER_SIZE];
    char password[BUFFER_SIZE];
} login_message;

typedef struct register_message {
    type msg_type;
    char username[BUFFER_SIZE];
    char password[BUFFER_SIZE];
    char email[BUFFER_SIZE];
    unsigned int age;
} register_message;

typedef struct upload_profile_pic_message {
    type msg_type;
    char path[BUFFER_SIZE];
} upload_profile_pic_message;

typedef union message {
    base_message base;
    login_message login_m;
    register_message register_m;
    upload_profile_pic_message upload_profile_pic_m;
} message;

void process_login(login_message msg) {
    printf("Login message received:\n");
    printf("Data: { username: %s, password: %s }\n", msg.username, msg.password);
}

void process_register(register_message msg) {
    printf("Register message received:\n");
    printf("Data: { username: %s, password: %s, email: %s, age: %d }\n", msg.username, msg.password, msg.email, msg.age);
}

void process_upload_profile_pic(upload_profile_pic_message msg) {
    printf("Upload profile picture message received:\n");
    printf("Data: { path: %s }\n", msg.path);
}

void process_messages(message *messages, unsigned int size) {
    for(unsigned int i = 0; i < size; i++) {
        switch(messages[i].base.msg_type) {
            case LOGIN:
                process_login(messages[i].login_m);
                break;
            case REGISTER:
                process_register(messages[i].register_m);
                break;
            case UPLOAD_PROFILE_PIC:
                process_upload_profile_pic(messages[i].upload_profile_pic_m);
                break;
            default:
                printf("ERROR: Unknown message type!\n");
        }
        printf("-----------------\n");
    }
}

int main(int argc, char const *argv[])
{
    message messages[5];
    
    login_message login_msg = {
        .msg_type = LOGIN, 
        .username = "hello", 
        .password = "secret"
    };
    register_message register_msg = {
        .msg_type = REGISTER, 
        .username = "john", 
        .password = "12345", 
        .email = "john@gmail.com", 
        .age = 24
    };
    register_message register_msg2 = {
        .msg_type = REGISTER, 
        .username = "michael", 
        .password = "password", 
        .email = "mike@hotmail.com", 
        .age = 15
    };
    upload_profile_pic_message upload_profile_pic_msg = {
        .msg_type = UPLOAD_PROFILE_PIC, 
        .path = "imgur.com/blablabla"
    };
    login_message login_msg2 = {
        .msg_type = LOGIN, 
        .username = "john", 
        .password = "12345"
    };

    messages[0] = (message) login_msg;
    messages[1] = (message) register_msg;
    messages[2] = (message) register_msg2;
    messages[3] = (message) upload_profile_pic_msg;
    messages[4] = (message) login_msg2;

    process_messages(messages, 5);

    return 0;
}