#return the size of Longest Increasing Subsequence in O(N^2)
def LIS(a):
    if(len(a)== 0) :
        return 0
    # we make a list dp[i] = size of lis for elements 0 to i
    dp=[]
    dp.append(int(1))
    n=len(a)
    for i in range (1,n):
        dp.append(1)
        for j in range (0,i):
            if(a[j]<a[i]):
                dp[i]=max(dp[i],dp[j]+1)
    return dp[n-1]


