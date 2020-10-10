package com.company.MatrixTransposition;

import static com.company.MatrixTransposition.MatrixTransposition.*;
public class Main {

    public static void main(String[] args) {
	// write your code here
        int[][] firstMatrix = {{1,2,3},{4,5,6}, {7,8,9}};
        int[][] transposedMatrix = new int[dimensions][dimensions];
        int i;
        int j;

        transpose(firstMatrix, transposedMatrix);

        System.out.println("The transposed matrix is: \n");

        for (i = 0; i< dimensions; i++){
            for (j = 0; j< dimensions; j++){
                System.out.print(transposedMatrix[i][j] + " ");

            }
            System.out.print("\n");
        }

    }
}
