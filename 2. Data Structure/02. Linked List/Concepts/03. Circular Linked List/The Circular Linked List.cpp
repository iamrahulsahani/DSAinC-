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

void deleteLastNode(Node* &head)
{
    Node* p = head;
    if(head->next == head) //when there is only 1 node
    {
        head = NULL;
        delete p;
        return;
    }
    while(p->next->next!=head)
    {
        p = p->next;
    }
    p->next = head;
    delete p;
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

int length(Node* head)
{
    Node* p = head;
    {
        if(p == NULL)
        {
            return 0;
        }
    }
    int count = 0;
    while(true)
    {
        p = p->next;
        count++;
        if(p==head)
        {
            break;
        }
    }
    return count;
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
    cout<<length(head);
}
