/*
 *  Java Program for Longest Increasing Subsequence
 */

import java.util.*;

class LongestIncreasingSubsequence
{
  /*
   *  Functiont to print Longest Increasing Subsequence and return the length of the LIS
   *  @param arr: given array
   *  @param n: size of the array
   *  @return max: length of the LIS
   */

  static int lis(int arr[], int n)
  {
    int lis[] = new int[n];
    ArrayList<Integer> indexes = new ArrayList<Integer>(n);
    int i, j, max = 0;

    for (i = 0; i < n; i++)
      lis[i] = 1;

    for (i = 1; i < n; i++ )
    {
      for ( j = 0; j < i; j++ )
      {
        if ( arr[i] > arr[j] && lis[i] < lis[j] + 1)
          lis[i] = lis[j] + 1;
      }
    }

    for (i = 0; i < n; i++ )
    {
      if ( max < lis[i])
        max = lis[i];
    }

    int tmp = max;  
    for (i = n - 1; i >= 0; --i)
    {
      if (lis[i] == tmp)
      {
        indexes.add(i);
        --tmp;
      }
    }
    
    Collections.reverse(indexes);
    
    for (i = 0; i < indexes.size(); i++)
    {
      System.out.print(arr[indexes.get(i)] + " ");
    }
    System.out.println();

    return max;
  }

  /*
   *  Driver function
   */
  public static void main(String args[])
  {
    int testArr[] = {10, 22, 9, 33, 21, 50, 41, 60};
    int n = testArr.length;

    System.out.print("Longest Increasing Subsequence: " );
    int lengthLis = lis(testArr, n);
    System.out.println("Length of the LIS: " + lengthLis);
  }
}