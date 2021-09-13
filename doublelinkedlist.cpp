#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *prev;
    Node *next;
    Node(int new_data)
    {
        data=new_data;
        prev=NULL;
        next==NULL;
    }
    
};
struct Node *head=NULL;
void insert_begin(int data)
{
    struct Node *new_node=new Node(data);
    if(head==NULL)
    {
        head=new_node;
    }
    else
    {
        head->prev=new_node;
        new_node->next=head;
        head=new_node;
    }
}
void insert_end(int data)
{
    struct Node *new_node=new Node(data);
    struct Node *temp=head;
    if(head==NULL)
    {
        head=new_node;
    }
    else
    {
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=new_node;
        new_node->prev=temp;
    }
}
void delete_begin()
{
    if(head==NULL)
    {
        cout<<"list was empty"<<endl;
    }
    else
    {
        
        head=head->next;
        head->prev=NULL;
    }
}
void delete_end()
{
    struct Node *temp=head;
    if(head==NULL)
    {
        cout<<"list was empty"<<endl;
    }
    else
    {
        while(temp->next->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=NULL;
    }
}
void print_list()
{
    struct Node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data;
        temp=temp->next;
    }
    cout<<"\n";
}
void print_reverse()
{
    struct Node *temp=NULL;
    while(temp!=NULL)
    {
        temp=temp->next;
    }
    while(temp!=NULL)
    {
        cout<<temp->data;
        temp=temp->prev;
    }
    cout<<"\n";
}
int search(int key)
{
    struct Node *temp=head;
    int count=0;
    if(head==NULL)
    {
        return -1;
    }
    else
    {
        while(temp!=NULL)
        {
            if(temp->data==key)
            {
                return count;
                break;
            }
            count++;
        }
    }
}
int main() 
{
    insert_begin(9);
    insert_end(10);
    insert_begin(67);
    insert_end(89);
    insert_begin(68);
    insert_end(8);
    print_list();
    delete_begin();
    delete_end();
    print_reverse();
    cout<<search(68)<<endl;
	cout<<"GfG!";
	return 0;
}



































