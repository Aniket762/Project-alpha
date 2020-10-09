# Longest Common Subsequence
# Solution using Dynamic programming

text1 = input("Enter a string ")   # text1 is the 1st string input
text2 = input("Enter a string ")   # text2 is the 2nd string input

# finding the length of the strings 
len1 = len(text1)
len2= len(text2)
dp=[]

# declaring the array for storing the dp values 
for i in range(len1 + 1):
    dp.append([0]*(len2+1))

"""Following steps build dp[m+1][n+1] using bottom up approach
    where dp[i][j] contains length of LCS of text1[0..i-1] and text2[0..j-1]"""
for i in range(1, len1 + 1):
    for j in range(1, len2 + 1):
        if text1[i - 1] == text2[j - 1]:
            dp[i][j] = dp[i - 1][j - 1] + 1
        else:
            dp[i][j] = max(dp[i][j - 1], dp[i - 1][j])
            
# dp[m][n] contains the length of LCS of text1[0..n-1] and text2[0..m-1]
print("Length of Longest Common Subsequence : ",dp[len1][len2]) 