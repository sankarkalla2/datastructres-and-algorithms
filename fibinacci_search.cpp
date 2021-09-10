#include <iostream>
using namespace std;
int min(int a,int b)
{
    if(a<b)
      return a;
    else
      return b;
}
int fibonacci_search(int arr[],int n,int key)
{
    int fib2=0;
    int fib1=1;
    int fib=fib1+fib2;
    int offset=0;
    while(fib<n)
    {
        fib2=fib1;
        fib1=fib;
        fib=fib1+fib2;
    }
    while(fib>1)
    {
        int i=min(offset+fib2,n-1);
        if(arr[i]<key)
        {
            fib=fib1;
            fib1=fib2;
            fib2=fib-fib1;
            offset=i;
        }
        else if(arr[i]>key)
        {
            fib=fib2;
            fib1=fib1-fib2;
            fib2=fib-fib1;
            
        }
        else
        {
            return i;
        }
    }
    if(fib1 && arr[offset+1]==key)
    {
        return offset+1;
    }
    return 0;
    
}
int main() 
{
    int arr[]={10,20,21,34,56,77,89,90};
    int n=sizeof(arr)/sizeof(arr[0]);
    int key=90;
    int res=fibonacci_search(arr,n,key);
	if(res)
	{
	    cout<<"element found at index "<<res<<endl;
	}
	else
	{
	    cout<<"element not present in arr"<<endl;
	}
	return 0;
}
