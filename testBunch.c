#include <stdio.h>
#include <stdbool.h>

int main() {
    int grade = 100;

    // short-hand if statement (condition) ? (true) : (false)
    (grade > 90) ? printf("%c\n", 'A') : printf("%c\n", 'B');
}