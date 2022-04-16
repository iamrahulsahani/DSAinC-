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

void display(Node* head)
{
    Node* p=head;
    while(p!=NULL)
    {
        cout<<p->data<<" ";
        p = p->next;
    }
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

    display(head);
    cout<<endl;
    insertAtPos(head, 20, 3);
    display(head);

}
