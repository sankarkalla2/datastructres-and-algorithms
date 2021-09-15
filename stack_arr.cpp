#include <iostream>
using namespace std;
#define MAX 100
int top=-1;
int arr[MAX];
void push(int data)
{
    if(top>=MAX-1)
    {
        cout<<"stack is overflow"<<endl;
    }
    else
    {
        top=top+1;
        arr[top]=data;
    }
}
void pop()
{
    if(top==-1)
    {
        cout<<"stack is underflow"<<endl;
    }
    else
    {
        top--;
    }
}
void Top()
{
    if(top==-1)
    {
        cout<<"stack is empty"<<endl;
    }
    else
    {
        cout<<arr[top]<<endl;
    }
}
bool isempty()
{
    if(top==-1)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
bool is_full()
{
    if(top>=MAX-1)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
int main() 
{
	push(20);
	push(77);
	push(89);
	push(34);
	Top();
	pop();
	Top();
	cout<<isempty()<<endl;
	cout<<is_full()<<endl;
	return 0;
}
