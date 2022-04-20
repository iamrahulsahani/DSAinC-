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

void insertAtEnd(Node* &head, int val)
{
    Node* temp = new Node(val);
    Node* p = head;
    if(head==NULL)
    {
        temp->next = temp;
        head = temp;
        return;
    }
    while(p->next!=head)
    {
        p = p->next;
    }
    p->next = temp;
    temp->next = head;
}

void insertAtPos(Node* &head, int val, int pos)
{
    int count = 1;
    Node* p = head;
    Node* temp = new Node(val);
    if(pos == 0)
    {
        insertAtBeg(head, val);
        return;
    }
    while(p->next!=head)
    {
        if(count == pos)
        {
            temp->next = p->next;
            p->next = temp;
            return;
        }
        p = p->next;
        count++;
    }
    insertAtEnd(head, val);
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
    insertAtEnd(head, 1);
    insertAtEnd(head, 2);
    insertAtEnd(head, 3);
    insertAtEnd(head, 4);
    insertAtEnd(head, 5);

    display(head);
    cout<<endl;
    insertAtPos(head, 10, 2);
    display(head);
}
