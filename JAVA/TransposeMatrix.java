    import java.util.*;
    public class TransposeMatrix {
        public static void transpose(int[][] matrix1,int rowvalue,int colvalue)
        { 
            int row = rowvalue;
            int col = colvalue;

            int loop1,loop2,temp;
            int[][] matrix2 = new int [col][row]; 

            for(loop1=0;loop1<col;loop1++){

                for(loop2=0;loop2<row;loop2++){
                    /*takes the element from the row
                    of matrix1 and puts it in the column of matrix2.
                    eg: matrix1 is 2x4 = {{1,2,3,4},{5,6,7,8}}
                        matrix2 will be 4x2 = {{1,5},{2,6},{3,7},{4,8}} */
                        temp=matrix1[loop2][loop1];
                        matrix2[loop1][loop2]=temp;
                }
            }
            System.out.println("Transposed Matrix");
            for(loop1=0;loop1<col;loop1++){
            for(loop2=0;loop2<row;loop2++)
            {
                
                System.out.print(matrix2[loop1][loop2]+" ");
            }
                System.out.print("\n");
        }
        }
        

    public static void main(String[] args){
        Scanner sc=new Scanner(System.in); //take input from the user
        System.out.println("Enter the number of rows:");
        int rows=sc.nextInt();
        System.out.println("Enter the number of columns:");
    int  cols = sc.nextInt();
    int[][] matrix=new int[rows][cols];
        for(int loop1=0;loop1<rows;loop1++){
            for(int loop2=0;loop2<cols;loop2++)
            {
                System.out.println("Enter the element for row"+loop1+"column"+loop2+":");
                int element=sc.nextInt();
                matrix[loop1][loop2]=element;
            }
        }
        transpose(matrix,rows,cols); //call transpose function which performs the operation
        sc.close();
    }
    }
