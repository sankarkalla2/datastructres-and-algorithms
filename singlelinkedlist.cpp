#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
    Node(int new_data)
    {
        data=new_data;
        next=NULL;
    }
};
struct Node *head=NULL;
int Get_new_node(int new_data)
{
    
}
void insert_begin(int data)
{
    struct Node *new_node=Get_new_Node(data);
    //struct
    if(head==NULL)
    {
        head=new_node;
        
    }
    else
    {
        new_node->next=head;
        head=new_node;
    }
}
void insert_end(int data)
{
    struct Node *temp=head;
    struct Node *new_node=new Node(data);
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=new_node;
}
void delete_begin()
{
    if(head==NULL)
    {
        cout<<"list was empty"<<endl;
        //head=head->next;
    }
    else
    {
        head=head->next;
    }
}
void delete_end()
{
    struct Node *temp=head;
    while(temp->next->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=NULL;
}
void print_list()
{
    struct Node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}
int search(int key)
{
    struct Node *temp=head;
    int count=0;
    if(head==NULL)
    {
        cout<<"list was  empty"<<endl;
    }
    else
    {
        while(temp!=NULL)
        {
            if(temp->data==key)
            {
                return count;
            }
            count++;
            temp=temp->next;
        }
    }
}
int main() 
{
    insert_begin(12);
    insert_end(89);
    insert_end(77);
    insert_begin(74);
    insert_end(6);
    print_list();
    delete_begin();
    delete_end();
    print_list();
    cout<<"found index:"<< search(77);
//dexsearch(77);
	//cout<<"GfG!";
	return 0;
}



















