int min(int i,int j,int k){
    if(i<j && i<k){
        return i;
    }
    else if(j<i && j<k){
        return j;
    }
    else{
        return k;
    }
}
int main() {
    int num;
    scanf("%d",&num);
    while(num>0){
        num-=1;
        int i,j,k,l,m,n,l1,l2;
        char str1[1000],str2[1000];
        scanf("%d %d\n",&l1,&l2);
        scanf("%s %s",str1,str2);
        int dp[l1+1][l2+1];
        //memset(dp,0,sizeof(dp));
        for(i=0;i<=l1;i++){
            for(j=0;j<=l2;j++){
                if(i==0){
                    dp[i][j]=j;
                }
                else if(j==0){
                    dp[i][j]=i;
                }
                else if(str1[i-1]==str2[j-1]){
                    dp[i][j]=dp[i-1][j-1];
                }
                else{
                    k=min(dp[i-1][j],dp[i][j-1],dp[i-1][j-1]);
                    dp[i][j]=k+1;
                }
            }
        }
        printf("%d\n",dp[l1][l2]);
    }
}
