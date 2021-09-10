#include <iostream>
using namespace std;
int binary_search(int arr[],int l,int n,int key)
{
    int mid;
    
    if(n>=1)
    {
        mid=l+(n-1)/2;
    }
    if(arr[mid]==key)
    {
        return mid;
    }
    else if(arr[mid]<key)
    {
        return binary_search(arr,l,mid-1,key);
    }
    else
    {
        return binary_search(arr,l,mid+1,key);
    }
    
   return -1;
}
int main() 
{
    int arr[]={10,20,30,40,50};
    int n=sizeof(arr)/sizeof(arr[0]);
    int key=40;
    int result=binary_search(arr,0,n-1,key);
    cout<<result<<endl;
	cout<<"GfG!";
	return 0;
}
