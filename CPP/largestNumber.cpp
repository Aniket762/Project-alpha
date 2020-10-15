#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int* arr= new int[n];
    int max=INT_MIN;
    cout<<"Enter the elements of the array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(max <arr[i]){
            max=arr[i];
        }
    }

    cout<<"Largest number in array is: " <<max;

}
