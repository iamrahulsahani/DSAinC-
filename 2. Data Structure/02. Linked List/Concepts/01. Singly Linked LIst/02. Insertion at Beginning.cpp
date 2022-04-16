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

    insertAtBegin(head, 0);
    insertAtBegin(head, -1);
    insertAtBegin(head, -2);
    insertAtBegin(head, -3);

    display(head);

}
