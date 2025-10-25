#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void namePrint(char* name);

int main(){
    char myName[10] = "Alan Tran";
    char* ptrName = myName;

    namePrint(ptrName);
}

void namePrint(char* name) {
    while(*name != '\0') {
        printf("%c\n", *name);
        name++;
    }
}