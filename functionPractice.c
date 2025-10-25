#include <string.h>
#include <stdio.h>
#include <stdbool.h>

void multByTwo(int* numDouble){
    *numDouble *= 2;
}

int main(){
    int num = 8;
    printf("The number is: %d\n", num);

    int* ptr = &num;

    multByTwo(ptr);

    printf("The number is now: %d\n", *ptr);
    printf("The memory address is: %p\n", ptr);
}
