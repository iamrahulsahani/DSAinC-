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

void insertAtBeg(Node* &head, int val)
{
    Node* temp = new Node(val);
    if(head == NULL)
    {
        temp->next = temp;
        head = temp;
        return;
    }
    Node* p = head;
    while(p->next!=head)
    {
        p = p->next;
    }
    p->next = temp;
    temp->next = head;
    head = temp;
}

void display(Node* head)
{
    Node* p = head;
    while(true)
    {
        cout<<p->data<<" ";
        p = p->next;
        if(p==head)
        {
            break;
        }
    }
}


int main()
{
    Node* head = NULL;

    insertAtBeg(head, 0);
    insertAtBeg(head, -1);
    insertAtBeg(head, -2);
    insertAtBeg(head, -3);

    display(head);
}
