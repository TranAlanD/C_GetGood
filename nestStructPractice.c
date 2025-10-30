#include <stdio.h>

struct Owner{
    char firstName[30];
    char lastName[30];
};

struct Car{
    char brand[30];
    int year;
    struct Owner owner;
};

int main() {
    struct Owner person = {"Alan", "Tran"};
    struct Car japan = {"Toyota", 2019, person};

    printf("%s %s owns a %d %s", japan.owner.firstName, 
        japan.owner.lastName,
        japan.year,
        japan.brand);
}