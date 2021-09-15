#include <iostream>
using namespace std;
struct Queue
{
    int data;
    struct Queue *next;
};
struct Queue *rear=NULL;
struct Queue *front=NULL;
void Enqueue(int data)
{
    struct Queue *new_node=new Queue();
    new_node->data=data;
    new_node->next=NULL;
    if(front==NULL && rear==NULL)
    {
        front=rear=new_node;
    }
    else
    {
        rear->next=new_node;
        rear=new_node;
    }
    
}
void Dqueue()
{
    struct Queue *temp=front;
    if(rear==NULL || rear==NULL)
    {
        cout<<"Queue is empty"<<endl;
    }
    if(front==rear)
    {
        front=rear=NULL;
    }
    front=front->next;
    
    
    
}
void peek()
{
    if(rear==NULL)
    {
        cout<<"queue is underflow"<<endl;
    }
    else
    {
        cout<<rear->data<<endl;
    }
}
void tail()
{
    if(front==NULL || front==rear)
    {
        cout<<"queue is underflow"<<endl;
    }
    else
    {
        cout<<front->data<<endl;
    }
}
void print_queue()
{
    if(front==NULL)
    {
        cout<<"queue is underflow"<<endl;
    }
    struct Queue *temp=front;
    while(temp!=NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->next;
    }
    
}
int main() 
{
	Enqueue(10);
	Enqueue(20);
	Enqueue(30);
	print_queue();
	tail();
	Dqueue();
	peek();
	Dqueue();
	Dqueue();
	Dqueue();
	print_queue();
	return 0;
}
































