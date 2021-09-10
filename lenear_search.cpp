#include <iostream>
using namespace std;
int lenear_search(int arr[],int n,int key)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            return i;
        }
    }
    return -1;
}
int main() 
{
    int arr[]={24,55,21,6,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    int key=6;
	int result=lenear_search(arr,n,key);
	if(result==-1)
	cout<<"Element is not found in array"<<endl;
	cout<<"Element present in index "<<result<<endl;
	return 0;
}
