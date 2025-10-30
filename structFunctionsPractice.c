#include <stdio.h>
#include <string.h>

struct Owner{
    char firstName[30];
    char lastName[30];
};

void changeMyName(struct Owner* ptr);

int main() {
    struct Owner person = {"Alan", "Tran"};

    struct Owner* ptr = &person;

    printf("My name is %s %s\n", ptr->firstName, ptr->lastName);

    changeMyName(ptr);

    printf("My name is %s %s\n", ptr->firstName, ptr->lastName);
}

void changeMyName(struct Owner* ptr) {
    strcpy(ptr->firstName, "Steven");
    strcpy(ptr->lastName, "Universe");
}
