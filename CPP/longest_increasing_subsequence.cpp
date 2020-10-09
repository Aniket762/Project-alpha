#include <iostream>

using namespace std;

int main(){
    int length; //number of elements
    cin >> length;

    int value[length]; //array to store value of elements
    for(int i=0; i<length; ++i){
        cin>>value[i];
    }

    /*algorithm:
        This problem can be solved using Dynamic Programming.
        Time complexity of the algorithm will be O(n^2)
        Each state of DP will store the longest increasing subsequence 
        ending at that position
    */

   int dp[length];

    //initialising dp[i] = 1; since in any case we can have a single element
   for(int i=0; i<length; ++i){
       dp[i]=1;
   }

   for(int i=0; i<length; ++i){
       for(int j=0; j<i; ++j){
           if(value[i]>=value[j]){
               dp[i]=max(dp[i], dp[j]+1);
           }
       }
   }

   int answer =0; //answer is going to be maximum of all dp[i]

   for(int i=0; i<length; ++i){
       answer= max(answer, dp[i]);
   }

   cout<<answer;
}