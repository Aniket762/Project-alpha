#include <bits/stdc++.h>

using namespace std;


bool cmp(int a, int b)
{
    return a<b;
}
void merge ( int arr[], int l,int mid, int r)
{
    int temp [r-l];
    int p1=l,p2=mid;
    for(int i=0;i<r-l;++i)
    {
        if(p1>=mid)
        {
            temp[i]=arr[p2++];
        }
        else if(p2>=r)
        {
            temp[i]=arr[p1++];
        }
        else if (p1<mid && p2 <r)
        {
            if(cmp(arr[p1],arr[p2]))//p1<p2
            {
                temp[i]=arr[p1++];
            }
            else
            {
                temp[i]=arr[p2++];
            }
            
        }
        
    }
    for(int i=0;i<r-l;++i)
    {
        arr[i+l]=temp[i];
    }
    return;
}
void mergeSort(int arr[], int size ,int l, int r)//sorts the array for index i=l to r-1
{
    if(r-l<2)  return;

    int mid=(l+r)/2;
    mergeSort(arr,size,l,mid);
    mergeSort(arr,size,mid,r);

    merge (arr ,l , mid , r);
}

int main()
{
    int arr[] = {1,5,6,2,66,74,32,43,646,73,72};

    
    int size = sizeof(arr)/sizeof(arr[0]);
    mergeSort(arr,size,0,size);
    for(int i=0;i<size;++i)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}