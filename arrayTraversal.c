#include <stdio.h>
#include <stdbool.h>

int main(){
    int ages[] = {20, 22, 18, 35, 48, 26, 87, 70};
    float sum = 0;
    int i;

    int length = sizeof(ages) / sizeof(ages[0]);

    for(i = 0; i < length; i++) {
        sum += ages[i];
    }

    printf("The average age is: %.2f", sum/length);
}

