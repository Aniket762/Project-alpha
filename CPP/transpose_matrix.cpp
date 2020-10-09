#include <iostream>

using namespace std;

int main(){
    int rows, columns;
    cin>>rows>>columns;

    int matrix[rows][columns];

    for(int i=0; i<rows; ++i){
        for(int j=0; j<columns; ++j){
            cin>>matrix[i][j];
        }
    }

    /* transpose of a matrix means that:
        matrix[i][j] = transpose[j][i]
    */

   int transpose[rows][columns];

   for(int i=0; i<rows; ++i){
       for(int j=0; j<columns; ++j){
           transpose[i][j]= matrix[j][i];
       }
   }

   for(int i=0; i<rows; ++i){
       for(int j=0; j<columns; ++j){
           cout<<transpose[i][j]<<" ";
       }
       cout<<endl;
   }
}
