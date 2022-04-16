#include<iostream>
using namespace std;

class Node
{
    public:
        int data;
        Node* next;
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insertAtEnd(Node* &head, int val)
{
    
    Node* temp = new Node(val);
    if(head==NULL)
    {
        head = temp;
        return;
    }
    Node* p=head;
    
    while(p->next!=NULL)
    {
        p=p->next;
    }
    p->next=temp;
    
}

bool search(Node* head, int key)
{
    if(head==NULL)
    {
        cout<<"Linked List is empty";
        return false;
    }
    while(head!=NULL)
    {
        if(key==head->data)
        {
            return true;
        }
        head = head->next;
    }
    return false;
}

void display(Node* head)
{
    Node* p=head;
    while(p!=NULL)
    {
        cout<<p->data<<" ";
        p = p->next;
    }
}

int main()
{
    Node* head=NULL;
    insertAtEnd(head, 1);
    insertAtEnd(head, 2);
    insertAtEnd(head, 3);
    insertAtEnd(head, 4);
    insertAtEnd(head, 5);
    insertAtEnd(head, 6);
    
    cout<<search(head,3);

}
