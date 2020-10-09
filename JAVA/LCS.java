package tempPack;

import java.util.*;
import java.lang.*;
import java.io.*;

class hacktober {
    public static int LCS(String s1, int m, String s2, int n) {
        int dp[][] = new int[m+1][n+1];
        for(int i = 1; i <= m; i++) {
            for(int j = 1; j <= n; j++) {
                if(s1.charAt(i-1) == s2.charAt(j-1)) {
                    dp[i][j] = dp[i-1][j-1] + 1;
                } else {
                    dp[i][j] = Math.max(Math.max(dp[i-1][j], dp[i-1][j-1]), dp[i][j-1]);
                }
            }
        }
        return dp[m][n];
    }
    
	public static void main (String[] args) {
		Scanner s = new Scanner(System.in);
		int t = s.nextInt();
		while(t-- > 0) {
		    int m = s.nextInt();
		    int n = s.nextInt();
		    String enter = s.nextLine();
		    String s1 = s.nextLine();
		    String s2 = s.nextLine();
		    System.out.println(LCS(s1,m,s2,n));
		}
	}
}