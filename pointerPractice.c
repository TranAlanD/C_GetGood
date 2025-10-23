#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main() {
    int myAge = 20;
    int* ptrMyAge = &myAge; // pointers are a variable that store a memory address
                            // or reference a memory address like &myAge
                            // The way to actually store the memory address is by
                            // making a pointer variable to reference the address
                            // THIS: now allows us to dereference the value at the
                            // address or the address
                            // Use cases:
                            // * memory allocation
                            // * reference to functions (changes value directly not
                            // a copy)

    printf("My age is: %d\n", *ptrMyAge);
    printf("Your new age is %d\n", *ptrMyAge * 2);

    *ptrMyAge *= 2;

    printf("YOU'RE DEAD AT AGE: %d\n", *ptrMyAge * 4);
}