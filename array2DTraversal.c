#include <stdio.h>
#include <stdbool.h>

int main(){
    int array2D[3][3] = { {1,0,0}, {0,1,0}, {0,0,1}};

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d ", array2D[i][j]);
        }
        printf("\n");
    }
}