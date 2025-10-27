#include <stdio.h>

int main() {
    FILE* fptr;

    fptr = fopen("filename.txt", "a");

    fprintf(fptr, "I'm Alan Tran\n");

    fclose(fptr);
}