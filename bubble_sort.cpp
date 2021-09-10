#include <bits/stdc++.h>
using namespace std;
void bubble_sort(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
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
    int arr[]={20,10,5,4,3,66};
    int n=sizeof(arr)/sizeof(arr[0]);
    bubble_sort(arr,n);
    print_arr(arr,n);
	return 0;
}
