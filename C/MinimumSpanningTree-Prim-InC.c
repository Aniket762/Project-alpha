#include <stdio.h>
#include <stdlib.h>

int count(int arr[], int n, int val){
    int c=0;
    for(int i=0; i<n; i++){
        if(arr[i] == val)
            c++;
    }
    return c;
}

int prim(int matrix[5][5]){
    int dist[5];
    for(int i=0; i<5; i++){
        dist[i] = 10; // assigning the entire dist array the maximum
    }
    int j=0, mini=10,sp=0,cost=0; // the max value is taken as 10 here.

    int prev[5]={0};

    while(count(dist, 5, 0) != 5){
        dist[0] =0;
        for(int i=0; i<5 ; i++){
            if(matrix[j][i] !=0 && dist[i] > matrix[i][j] && dist[i]!= 0){ // if in the adjanency matrix the cost is not 0 and checks dist array to see if its already selected. If the matrix cost is less than value in distance then it is selected.
                dist[i] = matrix[j][i];
                prev[i] = j;
            }
        }
        mini =10;
        for(int i=0; i<5; i++){
            if(dist[i]!= 10 && dist[i] < mini && dist[i]!= 0){ // 10 is the maximum cost and 0 is for the path already picked
                mini=dist[i];
                sp =i;
            }
        }
        dist[sp] =0; // distance value turns to 0 to indicate that this path has been picked
        j = sp;
    }
    for(int i=1; i<5 ; i++){
        cost += matrix[i][prev[i]];
    }
    return cost; // The minimum cost

}

int main()
{
    int matrix[5][5]={ {0,0,3,0,4}, {0,0,6,0,1},{3,6,0,5,0},{0,0,5,0,7},{4,1,0,7,0} };
    printf("%d", prim(matrix)); // This will print the minimum cost that we get from using the Prim's Algo
    return 0;
}
//This code is contributed by Vaishnavi Shah
