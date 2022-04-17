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

int length(Node* head)
{
    int count = 0;
    Node* p = head;
    while(p!=NULL)
    {
        count += 1;
        p = p->next;
    }
    return count;
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
cout<<length(head);
}
