#include <stdio.h>

int main()
{
    int i, j, rows = 7;

    for(i = rows; i >= 1; i--) {
        for(j = 1; j <= i; j++) {
            printf("C");
        }
        printf("\n");
    }
    for(i = 1, rows = 7; i < rows; i++) {
        for(j = 0; j <= i; j++) {
            printf("C");
        }
        printf("\n");
    }
    return 0;
}