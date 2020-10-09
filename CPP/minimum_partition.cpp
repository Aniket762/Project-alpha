#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <vector>
#include <limits.h>
#include <math.h>

using namespace std;

int static t[1001][10001];

//funcion to find the minimum value of the subset sum diffrence
int min_subset_diff(vector<int>& nums) {
    int range=0, n = nums.size();
    for(int i=0; i<n; i++) range += nums[i];
    int s = range/2;
    
    for(int i=0; i<n+1; i++) t[i][0]=true;
    for(int i=1; i<s+1; i++) t[0][i]=false;
    
    //i represents the curr_size of vector and j represents the curr_sum
    for(int i=1; i<n+1; i++){
        for(int j=1; j<s+1; j++){
            if(nums[i-1] <= j) t[i][j]= t[i-1][j] || t[i-1][j- nums[i-1]];
            else t[i][j] = t[i-1][j];
        }
    }
    
    //finding the minimum difference
    int mini = INT_MAX;
    for(int i=0; i<=s; i++){ 
        if(t[n][i] == true) mini = min(mini, abs(range-(2*i)));
    }
    return mini;
    
}

int main(){

    //taking input in the form of:
    //in first line: an integer n -> size of set
    //in second line: n numbers separated by space
    int n, ans;
    std::cin>>n;
    std::vector<int>nums(n);
    for(int i=0; i<n; i++) cin>>nums[i];
    
    //calling function min_subset_diff to find the minimum difference between subset sums
    ans = min_subset_diff(nums);
    std::cout <<ans<< std::endl;
    return 0;
}
