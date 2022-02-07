#include <stdio.h>

int main() {

    int rows = 6, i, j, space, k = 0;

    for(i = rows; i >= 1; i--) {
        for(space = 0; space < rows - i; space++) {
           printf("  ");
        }

        for(j = i; j <= 2 * i - 1; j++) {
           printf("C ");
        }

        for(j = 0; j < i - 1; j++) {
           printf("C ");
        }
          
        printf("\n");
    }

    for(i = 2; i <= rows; i++, k = 0) {
        for(space = 1; space <= rows - i; space++) {
            printf("  ");
      }
        while(k != 2 * i - 1) {
            printf("C ");
            k++;
        }
        printf("\n");
    }
   return 0;
}