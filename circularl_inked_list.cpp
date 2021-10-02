#include <iostream>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
    Node(int new_data)
    {
        this->data=new_data;
        next=NULL;
    }
};
struct Node *last=NULL;
void empty_node(int data)
{
    if(last!=NULL)
    {
        cout<<"list is not empty"<<endl;
        return;
    }
    else
    {
        struct Node *new_node=new Node(data);
        last=new_node;
        last->next=last;
    }
}
void insert_begin(int data)
{
    if(last->next==NULL)
    {
        return;
    }
    else
    {
        struct Node *new_node=new Node(data);
        new_node->next=last->next;
        last->next=new_node;
        last=new_node;
    }
}
void insert_end(int data)
{
    if(last==NULL)
    {
        return;
    }
    struct Node *new_node=new Node(data);
    new_node->next=last->next;
    last->next=new_node;
    last=new_node;
}
void delete_begin()
{
    if(last==NULL)
    {
        cout<<"list is empty"<<endl;
    }
    else
    {
        struct Node* temp=last->next;
        last->next=last->next->next;
        delete temp;
        
    }
}
void delete_end()
{
    struct Node *temp=last->next;
    while(temp->next!=temp->next->next)
    {
        temp=temp->next;
    }
    temp->next=temp->next->next;
    last=temp;
}
void print()
{
    if(last==NULL)
    {
        cout<<"list is empty"<<endl;
    }
    struct Node *temp=last->next;
    temp=temp->next;
    while(temp!=last->next)
    {
        cout<<temp->data<<endl;
        temp=temp->next;
    }
    
}
int main()
{
    empty_node(89);
    insert_begin(78);
    insert_end(77);
    insert_end(8);
    insert_end(67);
    insert_begin(56);
    print();
    delete_begin();
    delete_end();
    delete_begin();
    delete_end();
    print();
	return 0;
}















