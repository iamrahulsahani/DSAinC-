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

insertAtBeg(head, 0);
insertAtBeg(head, -1);
insertAtBeg(head, -2);
insertAtBeg(head, -3);

display(head);
}
