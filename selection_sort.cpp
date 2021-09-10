#include <bits/stdc++.h>
using namespace std;

void selection_sort(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        int min=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min])
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
        cout<<arr[i]<<endl;
    }
}
int main()
{
    int arr[]={20,1,4,6,4,98,34};
    int n=sizeof(arr)/sizeof(arr[0]);
    selection_sort(arr,n);
    print_arr(arr,n);
	return 0;
}
