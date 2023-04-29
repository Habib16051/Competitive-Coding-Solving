#include<bits/stdc++.h>
using namespace std;

class Node{

    public:
    int data;
    Node* next;

    Node(int data)
    {
        this -> data = data; // it's pointing that a value would be inserted in  a data

        this -> next = next; // and a address would be stored in the next option.
    }


};

void insertAtHead(Node* &head, int d)
{
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}

void print(Node* &head)
{
    Node* temp = head;
    while(temp!= NULL)
    {
        cout<<temp -> data <<" ";
        temp = temp -> next;
    }
    cout<<endl;
}

int main()
{
    Node* node1 = new Node(10); // created a new node to insert a value
    cout<<node1->data<<endl;
    cout<<node1->next<<endl;

    // head pointed to node1
    Node* head = node1;
    print(head);

    insertAtHead(head, 12);
    print(head);
}
