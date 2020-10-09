#include <iostream>

using namespace std;

int main(){
    int distance;
    cin>>distance;

    /*algorithm:
        We will use dynamic programming to solve this problem
        lets suppose we are on an intermediate distance say x
        then number of ways to reach x will be sum of number of ways 
        to reach x-1, x-2 and x-3
    */

   int dp[distance+1];
   for(int i=1; i<distance+1; ++i){
       dp[i]=0;
   }
   dp[0]=1;  

   for(int i=1; i<=distance; ++i){
       for(int j=1; j<=3; ++j){
           if(i-j>=0){
               dp[i] += dp[i-j];
           }
       }
   }
   cout<<dp[distance];
}