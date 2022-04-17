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
        }
        p=p->next;
    }
    delete p; //kept the delete out of loop so that p can reach to last node & we can free memory of last node
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
    deleteLastNode(head);
    display(head);

}
