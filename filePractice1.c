#include <stdio.h>

int main() {
    FILE* fptr;

    fptr = fopen("filename.txt", "w");

    fprintf(fptr, "Hello world\n");

    fclose(fptr);
}