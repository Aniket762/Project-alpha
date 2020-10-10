package com.company.MatrixTransposition;

// Square Matrix Transposition
public class MatrixTransposition {
    static final int dimensions = 3;

    // storing the transpose for A[][] in B[][]
    static void transpose(int[][] A, int[][] B){
        int i, j;
        for (i = 0; i< dimensions; i++){
            for (j = 0; j < dimensions; j++){
                B[i][j]= A[j][i];
            }
        }
    }
}
