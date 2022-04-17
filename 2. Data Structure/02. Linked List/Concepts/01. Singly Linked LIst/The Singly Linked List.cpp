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

void insertAtBegin(Node* &head, int val)
{
    Node* temp = new Node(val);
    if(head==NULL)
    {
        head = temp;
        return;
    }
    temp->next=head;
    head = temp;
}

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

void insertAtPos(Node* &head, int val, int pos)
{
    int count=1;
    Node* p = head;
    Node *temp = new Node(val);
    if(head==NULL && pos==1) //when list is empty
    {
        head = temp;
        return;
    }
    if(pos==0)
    {
        temp->next=head;
        head = temp;
    }
    while(p!=NULL)
    {
        if(count==pos)
        {
            temp->next=p->next;
            p->next=temp;
            return;
        }
        p=p->next;
        count++;
    }
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

void deleteFirstNode(Node* &head)
{
    if(head==NULL)
    {
        cout<<"List is empty;";
        return;
    }
    Node* p = head;
    head=head->next;
    delete p;
    return;
}


void deleteLastNode(Node* &head)
{
    if(head==NULL)
    {
        cout<<"List is empty;";
        return;
    }
    Node* p = head;
    while(p->next!=NULL)
    {
        if(p->next->next==NULL)
        {
            p->next=NULL;
            delete p;
            return;
        }
        p=p->next;
    }

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

void deleteByIndex(Node* &head, int pos)
{
    Node* p = head;
    int count = 1;
    if(pos==1)
    {
        head=p->next;
        delete p;
        return;
    }
    while(p->next!=NULL)
    {
        
        if(pos== count+1)
        {
            p->next=p->next->next;
            delete p;
            return;
        }
        p = p->next;
        count++;
    }
}

int length(Node *head)
{
    if(head==NULL)
    {
        return 0;
    }
    Node*p = head;
    int count = 1;
    while(p->next!=NULL)
    {
        count+=1;
        p = p->next;
    }
    return count;
    
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

    cout<<length(head);
}
