#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int* ptr;
    ptr = malloc(sizeof(*ptr));
    *ptr = 20;

    printf("My age is: %d", *ptr); 
}