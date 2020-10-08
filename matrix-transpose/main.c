#include <stdio.h>
#include <stdlib.h>

int main()
{
int a,b,x,y;

printf("Enter the number of rows for the matrix: \n");
scanf("%d",&x);
printf("Enter the number of columns for the matrix: \n");
scanf("%d",&y);


int matrix[x][y];
int matrix_transposed[x][y];


printf("Please fill in the matrix with numbers: \n");


        //filling original matrix
    for(a=0; a<x; a++)
        for(b=0; b<y; b++){
            scanf("%d", &matrix[a][b]);
        }

        //transposing matrix
    for(a=0; a<x; a++)
        for(b=0; b<y; b++){
            matrix_transposed[b][a]= matrix[a][b];
        }



        //showing both matrix

    printf("\nOriginal matrix: \n");

   for(a=0; a<x; a++) {
    for (b=0; b<y; b++){
      printf("%d\t", matrix[a][b]);
    }printf("\n");
   }

   printf("\nTransposed matrix: \n");

   for(a=0; a<y; a++)
    for (b=0; b<x; b++){
      printf("%d\t", matrix_transposed[a][b]);
        if(b==x-1)
            printf("\n");
   }


 return 0;
}
