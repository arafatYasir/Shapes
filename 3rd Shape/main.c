#include <stdio.h>

int main()
{
    int i, space, j;
    int rows = 7;

    for(i = rows; i >= 1; i--) {
        for(space = rows - i; space > 0; space--) {
            printf(" ");
        }
        for(j = i; j > 0; j--) {
            printf("C");
        }
        printf("\n");
    }

    for(i = 2; i <= rows; i++) {
        for(space = rows - i; space > 0; space--) {
            printf(" ");
        }
        for(j = 1; j <= i; j++) {
            printf("C");
        }
        printf("\n");
    }
    return 0;
}