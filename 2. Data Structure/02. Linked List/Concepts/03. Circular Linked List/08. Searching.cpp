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

bool search(Node* head, int key)
{
    Node* p = head;
    while(p->next!=head)
    {
        if(key == p->data)
        {
            return true;
        }
        p = p->next;
    }
    if(p->data == key)
    {
        return true;
    }
    return false;
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
    cout<<search(head, 10);
}
