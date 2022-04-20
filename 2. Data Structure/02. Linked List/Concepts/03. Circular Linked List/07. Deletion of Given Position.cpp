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
    if(head->next == head) //when there is only 1 node
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

void deleteByIndex(Node* &head, int pos)
{
    Node* p = head;
    int count = 1;
    while(p->next!=head)
    {
        if(pos==count+1)
        {
            p->next = p->next->next;
            delete p;
            return;
        }
        p = p->next;
        count++;
    }
    if(pos==1)
    {
        deleteFirstNode(head);
    }
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
    deleteByIndex(head, 5);
    display(head);

}
