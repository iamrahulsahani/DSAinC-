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

void insertAtBeg(Node* &head, int val)
{
    Node* temp = new Node(val);
    if(head==NULL)
    {
        head = temp;
        return;
    }
    temp->next = head;
    head->prev = temp;
    head = temp; //pointing head to new temp node for making it first node

}

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

void insertAtPos(Node* &head, int val, int pos)
{
    Node* temp = new Node(val);
    if(head==NULL)
    {
        head = temp;
        return;
    }
    Node* p = head;
    int count = 1;
    if(pos == 0) //when making temp node as first node
    {
        temp->next = p;
        p->prev = temp;
        head = temp; // making this temp node as first node by pointing head to new temp node
        return;
    }
    while(p!=NULL)//inserting temp node in any position other tahn first & last.
    {
        if(count == pos)
        {
            temp->next = p->next;
            p->next->prev = temp;
            p->next = temp;
            temp->prev = p;
            return;
        }
        if(p->next->next == NULL) //when making this temp node as last node(p->next->next means last second node)
        {
            p->next->next = temp;
            temp->prev = p->next->next;
            return;
        }
        p = p->next;
        count++;
    }
    

}

void deleteFirstNode(Node* &head)
{
    if(head==NULL)
    {
        cout<<"List is empty;";
        return;
    }
    Node *p = head;
    head = head->next;
    delete p;
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

void deleteByIndex(Node* &head, int pos)
{
    if(head==NULL)
    {
        cout<<"List is empty;";
        return;
    }
    Node* p = head;
    int count = 1;
    if(pos == 1)
    {
        p->next->prev = NULL;
        head = p->next;
        delete p;
        return;
    }
    while(p!=NULL)
    {
        if(count==pos)
        {
            p->prev->next = p->next;
            p->next->prev = p->prev;
            delete p;
            return;
        }
        if(p->next->next == NULL)
        {
            p->next = NULL;
        }
        p = p->next;
        count++;
    }
    delete p;
    return;
}

bool search(Node* head, int key)
{
    Node *p = head;
    while(p!=NULL)
    {
        if(key == p->data)
        {
            return true;
        }
        p = p->next;
    }
    return false;
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
