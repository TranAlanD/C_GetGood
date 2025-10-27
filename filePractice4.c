#include <stdio.h>

int main() {
    FILE* fptr;

    fptr = fopen("applyKnowledge", "w+");

    if(fptr == NULL) {
        printf("Could not open file/File does not exist");
        return 1;
    }

    fprintf(fptr, "My age is:");

    rewind(fptr);

    char inTheFile[100];

    fgets(inTheFile, 100, fptr);

    printf("%s%d", inTheFile, 20);

    fclose(fptr);
}