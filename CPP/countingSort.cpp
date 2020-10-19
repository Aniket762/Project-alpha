#include <bits/stdc++.h>
using namespace std;

  // function for counting sort
  static void countingsort(int Array[], int n) 
  {
    int max = 0;
    //find largest element in the Array
    for (int i=0; i<n; i++) 
      {  
        if(max < Array[i])
        {
           max = Array[i];
        } 
      }
    //Create a freq array to store number of occurrences of 
    //each unique elements in the given array 
    int freq[max+1];
    for (int i=0; i<max+1; i++) 
     {  
         freq[i] = 0;
     } 
    for (int i=0; i<n; i++) 
     {  
         freq[Array[i]]++;
     } 
     //sort the given array using freq array
     for (int i=0, j=0; i<=max; i++) 
      {  
        while(freq[i]>0)
        {
          Array[j] = i;
          j++;
          freq[i]--;
        }
      } 
  }

  // function to print array
  static void PrintArray(int Array[], int n) 
  { 
    for (int i=0; i<n; i++) 
      {  
        cout<<Array[i]<<" "; 
      }
    cout<<"\n"; 
  } 

 int main (){
    int MyArray[] = {9, 1, 2, 5, 9, 9, 2, 1, 3, 3};
    int n = sizeof(MyArray) / sizeof(MyArray[0]); 
    cout<<"Original Array\n";
    PrintArray(MyArray, n);

    countingsort(MyArray, n);
    cout<<"\nSorted Array\n";
    PrintArray(MyArray, n);
    return 0;
 }
