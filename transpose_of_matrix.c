#include <stdio.h>
int main() {
    int a[10][10], transpose[10][10], r, c, i, j;
   
    scanf("%d %d", &r, &c);

    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j) {
          
            scanf("%d", &a[i][j]);
        }

   

    // Finding the transpose of matrix a
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j) {
            transpose[j][i] = a[i][j];
        }

   
    for (i = 0; i < c; ++i)
        for (j = 0; j < r; ++j) {
            printf("%d ", transpose[i][j]);
            if (j == r - 1)
                printf("\n");
        }
    return 0;
}