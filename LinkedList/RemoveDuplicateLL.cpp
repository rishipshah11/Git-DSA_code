#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
using namespace std;

class Node {
    public:
    int data;
    Node* prev;
    Node* next;

    //constructor
    Node(int d ) {
        this-> data = d;
        this->prev = NULL;
        this->next = NULL;
    }

    ~Node() {
        int val = this -> data;
        if(next != NULL) {
            delete next;
            next = NULL;
        }
        cout << "memory free for node with data "<< val << endl;
    }
};
class Solution {
public:
    Node* deleteDuplicates(Node* head) {
        
        
        if(head == NULL)
            return NULL;
        
        Node* curr = head;
        
        while(curr != NULL)
        {
            if( (curr->next != NULL) && (curr->data == curr->next->data))
            {
                Node* next_next = curr->next->next;
                Node* NodeToDelete = curr->next;
                
                delete(NodeToDelete);
                
                curr->next = next_next;
            }
            else
            {
                // not equal
                curr = curr->next;
            }
        }
        return head;
    }
};