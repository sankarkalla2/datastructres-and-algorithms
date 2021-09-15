#include <iostream>
using namespace std;
#define MAX 100
struct Queue 
{
    int arr[MAX];
    int rear,front;
    Queue()
    {
        //int arr[MAX];
        rear=-1;
        front=-1;
    }
    void Enueue(int data)
    {
        if(rear>=MAX-1)
        {
            cout<<"Queue is full"<<endl;
        }
        else
        {
             if(front==-1)
             {
                 front=0;
             }
            rear=rear+1;
            arr[rear]=data;
            
        }
        
    }
    void Dueue()
    {
        if(front==-1 || front>=rear)
        {
            cout<<"Queue is underflow"<<endl;
        }
        else
        {
            front=front+1;
        }
    }
    void peek()
    {
        if(rear==-1 || front>=rear)
        {
            cout<<"Queue is empty"<<endl;
        }
        else
        {
            cout<<arr[rear]<<endl;
        }
    }
    void tail()
    {
        if(front==-1)
        {
            cout<<"Queue was empty"<<endl;
        }
        else
        {
            cout<<arr[front]<<endl;
        }
    }
    void is_empty()
    {
        if(front==-1 || front<=rear)
        {
            cout<<"Queue is empty"<<endl;
        }
        else
        {
            cout<<"Queue is not empty"<<endl;
        }
    }
    void is_full()
    {
        if(rear>=MAX-1 ||front>=rear)
        {
            cout<<"Queue is full"<<endl;
        }
        else
        {
            cout<<"Queue is not full"<<endl;
        }
    }
    void print_queue()
    {
        for(int i=front;i<=rear;i++)
        {
            cout<<arr[i];
        }
    }
    
    
};
int main() 
{
    
    struct Queue q1;
    q1.Enueue(10);
    q1.Enueue(89);
    q1.Enueue(78);
    q1.Enueue(45);
    q1.Enueue(66);
    q1.Dueue();
    q1.peek();
    q1.tail();
    q1.is_empty();
    q1.is_full();
    q1.print_queue();
	cout<<"GfG!";
	return 0;
}































