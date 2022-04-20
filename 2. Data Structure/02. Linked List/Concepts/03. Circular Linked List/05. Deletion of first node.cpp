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

void deleteFirstNode(Node* &head)
{
    Node* p = head;
    if(head->next == head)
    {
        head = NULL;
        delete p;
        return;
    }
    Node* temp = head; //to free memory
    while(p->next!=head)
    {
        p = p->next;
    }
    p->next = temp->next;
    head = temp->next;
    delete temp;
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

    display(head);
    cout<<endl;
    deleteFirstNode(head);
    display(head);
}
