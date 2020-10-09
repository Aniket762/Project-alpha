#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define deb(x) cout<<#x<<" = "<<x<<" \n ";
#ifndef ONLINE_JUDGE
#define OJ \
    freopen("input.txt", "r", stdin); \
    //freopen("output.txt", "w", stdout);
#else
#define OJ ;
#endif
#define fo(int, i, l, r) for ( int i = l ; i < r ; ++ i)
#define srtV(a) sort(a.begin(),a.end())

int edist(string s1, string s2)
{
    int n,m;
    int replaceCost=1,insertCost=1,delCost=1;
    n=s1.size();
    m=s2.size();
    if(n==0)
        return min(insertCost,delCost)*m;
    if(m==0)
        return min(insertCost,delCost)*n;
    int dp[n+1][m+1]; //dp[i][j] = min edist for str[i,n] and str[j,m]
    
    if(s1[n-1]==s2[m-1])
    {
        dp[n][m]=0;
    }
    else
    {
        dp[n][m]=min(min(insertCost+insertCost,delCost+delCost),replaceCost);
    }
    for(int i=n-1;i>=1;--i)
    {
        if(s1[i-1]==s2[m-1])
        {
            dp[i][m]=min(insertCost,delCost)*(n-i);
        }
        else
        {
            dp[i][m]=insertCost + dp[i+1][m];
            dp[i][m]=min(dp[i][m],delCost + dp[i+1][m]);
            dp[i][m]=min(replaceCost + min(insertCost,delCost)*(n-i),dp[i][m]);
            
        }
        
    }

    for(int j=m-1;j>=1;--j)
    {
        if(s1[n-1]==s2[j-1])
        {
            dp[n][j]=min(insertCost,delCost)*(m-j);
        }
        else
        {
            dp[n][j]=insertCost + dp[n][j+1];
            dp[n][j]=min(dp[n][j],delCost + dp[n][j+1]);
            dp[n][j]=min(replaceCost + min(insertCost,delCost)*(m-j),dp[n][j]);
            
        }
        
    }

    for(int i=n-1;i>=1;--i)
    {
        for(int j=m-1;j>=1;--j)
        {
            
            if(s1[i-1]==s2[j-1])
            {
                dp[i][j]=dp[i+1][j+1];
            }
            else
            {
                dp[i][j]= insertCost + min(dp[i+1][j],dp[i][j+1]);
                dp[i][j]= min(delCost + min(dp[i+1][j],dp[i][j+1]) , dp[i][j]);
                dp[i][j]=min(replaceCost + dp[i+1][j+1], dp[i][j]);

            }
            
        }
    }
    
    return dp[1][1];
    
    
}

void solve()
{
    string s1="sunday" , s2="saturday";
    //cout<<s1;
    cout <<edist(s1,s2);

}
signed main()
{
    
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    //int _t;cin>>_t;while(_t--)
    solve();
    return 0;
}