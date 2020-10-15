#include <bits/stdc++.h>
using namespace std;

int main(void)
{
  int size;
  cout << "Enter the size of the new array: " << endl;
  cin >> size;

  // creating new array
  int *arr = new int[size];

  // getting inout form stdin
  for (int i = 0; i < size; i++)
  {
    cin >> arr[i];
  }

  // finding the largest element in the array
  int max = arr[0];

  for (int i = 0; i < size; i++)
  {
    if (arr[i] > max)
    {
      max = arr[i];
    }
  }

  // printing the maximum element of the array to stdout
  cout << "The maximum element of the enterred array is : " << max << endl;
  return 0;
}