#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main() {
    char myName[22] = "AlanTran"; // making a string like this is a string literal
    char welcome[] = ", code MORE!";
    int length;
    int i;

    length = sizeof(myName); // because char = 1 byte, 9bytes + '\0'
                             // no need divide sizeof(myName[0]) since = 1

    printf("%d\n", strlen(myName)); // counts strings but doesn't count '\0'
                                 // this gives 8, sizeof() gives 9


    for(i = 0; i < strlen(myName); ++i) {
        printf("%c\n", myName[i]);
        // null terminator shows blank
    }

    strcat(myName, welcome);

    printf("%s\n", myName);

    char myName2[22];

    strcpy(myName2, myName);

    printf("%s\n", myName2);

    printf("0 is true, 1 is false: %d\n", strcmp(myName, myName2));
}