#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
using namespace std;

class Node
{
    public:
    int data;
    Node* next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertAtTail(Node* &head,int value)
{
    Node* curr = head;

    while(curr->next != NULL)
    {
        curr = curr->next;
    }

    Node* nodeAtTail = new Node(value);

    curr->next = nodeAtTail;
    nodeAtTail->next = NULL;


}

void print(Node* &head)
{
    Node* temp = head;

    while(temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

void insertAtHead(Node* &head,int d)
{
    //new node create
    Node* temp = new Node(d);

    temp->next = head;
    head = temp;
}

Node* reverceLL(Node* &head)
{
    Node* curr = head;
    Node* prev = NULL;
    Node* forward;

    while (curr != NULL)
    {
        forward = curr->next; 
        curr->next = prev;
        prev = curr;
        curr = forward;
       
    }

    return prev;
    
}

int main()
{
    // Node* head = new Node(3);
    
    Node* node1 = new Node(3);

    Node* head = node1;

    insertAtTail(head,5);
    insertAtTail(head,7);
    insertAtTail(head,9);

    print(head);

    Node* ans = reverceLL(head);

    cout << "Reverce Linked List : ";

    print(ans);

   
    /*
    print(head);

    insertAtHead(head,3);

    print(head);*/

    return 0;
}