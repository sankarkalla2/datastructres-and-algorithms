//cpp program for insertion sort
#include <bits/stdc++.h>
using namespace std;
void insertion_sort(int arr[],int n)
{
    int j;
    for(int i=1;i<n;i++)
    {
        int value=arr[i];
        j=i-1;
        
        /* Move elements of arr elements upto n to its rights index, that are
        greater than key, to one position ahead
        of their current position */
        
        while(j>=0 && value<arr[j])
        {
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=value;
       
    }
}
void print_arr(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main() 
{
    int arr[]={32,4,5,8,22,6,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    insertion_sort(arr,n);
    print_arr(arr,n);
	return 0;
}
