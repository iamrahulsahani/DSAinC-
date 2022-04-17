#include<iostream>
using namespace std;

class Node
{
    public:
        int data;
        Node* next;
        Node* prev;
        Node(int val)
        {
            data = val;
            next = NULL;
            prev = NULL;
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
    Node* p = head;

    while(p->next!=NULL)
    {
        p = p->next;
    }
    p->next = temp;
    temp->prev = p;
}

void deleteLastNode(Node* &head)
{
    if(head==NULL)
    {
        cout<<"List is empty;";
        return;
    }
    Node *p = head;
    while(p!=NULL)
    {
        if(p->next->next == NULL) //p->next->next means second last node
        {
            p->next = NULL; 
        }
        p = p->next;
    }
    delete p;
}

void display(Node* head)
{
    Node* p = head;
    while(p!=NULL)
    {
        cout<<p->data<<" ";
        p = p->next;
    }
}

int main()
{

Node* head = NULL;
insertAtEnd(head, 1);
insertAtEnd(head, 2);
insertAtEnd(head, 3);
insertAtEnd(head, 4);

display(head);
cout<<endl;
deleteLastNode(head);
display(head);


    
}
