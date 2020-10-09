#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <vector>
#include <ctype.h>
#include <math.h>

using namespace std;

//creating a global 2D array to store the values
int static t[1001][1001];


//LCS function
int lcs(string text1, string text2) {
    int n= text1.size();
    int m= text2.size();
	
	//Base Condition
    for(int i=0; i<n+1; i++) t[i][0]=0;
    for(int i=0; i<m+1; i++) t[0][i]=0;
	
	
    for(int i=1; i<n+1; i++){
        for(int j=1; j<m+1; j++){
            if(text1[i-1]==text2[j-1]) t[i][j] = 1 + t[i-1][j-1];
            else t[i][j] = max(t[i-1][j], t[i][j-1]);
        }
    }
    return t[n][m];
}


int main() {

	//taking input
	string s1, s2;
	cin>>s1>>s2;
	
	//calling LCS
	int ans = lcs(s1, s2);
	
	//printing the output
	std::cout<<ans<<std::endl;
	return 0;
}
