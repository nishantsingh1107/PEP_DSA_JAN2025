#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

void display(Node* head){
    if(head == NULL){
        cout<<"List is empty"<<endl;
        return;
    }
    Node* temp = head;
    do{
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    while(temp != head);
    cout<<"NULL"<<endl;
}

void InsertAtHead(Node* &head, int val){
    Node* n = new Node(val);
    if(head == NULL){
        n->next = n;
        head = n;
        return;
    }
    Node* temp = head;
    while(temp->next != head){
        temp = temp->next;
    }
    temp->next = n;
    n->next = head;
    head = n;
}

void InsertAtTail(Node* &head, int val){
    Node* n = new Node(val);
    if (head == NULL) {
        n->next = n;
        head = n;
        return;
    }
    Node* temp = head;
    while(temp->next != head){
        temp = temp->next;
    }
    temp->next = n;
    n->next = head;
}

void deleteAtHead(Node* &head){
    Node* temp = head;
    Node* del = head;
    while(temp->next != head){
        temp = temp->next;
    }
    temp->next = head->next;
    head = head->next;
    delete del;
}

void deleteAtTail(Node* &head){
    Node* temp = head;
    Node* del = head;
    while(temp->next->next != head){
        temp = temp->next;
        del = temp->next;
    }
    temp->next = head;
    delete del;
}
//delete at given Index

//Finding that the loop exist in a linked list
Node* loop_detection(Node* head){
    if(head == NULL) return NULL;
    Node* fast = head;
    Node* slow = head;

    while(slow != NULL && fast != NULL){
        slow = slow->next;
        fast = fast->next->next;

        if(fast == slow) return slow;
    }
    return NULL;
}

Node* getStartingNode(Node* head){
    if(head == NULL) return NULL;

    Node* intersection = loop_detection(head);
    Node* slow = head;
    while(slow != intersection){
        slow = slow->next;
        intersection = intersection->next;
    }
    cout<<slow->data<<endl;
}

//If a loop exist in a linked list detect it and then break the loop
//Find the mid Element in the Linked List 

int main(){
    Node* head = NULL;
    InsertAtHead(head, 2);
    InsertAtHead(head, 1);
    InsertAtTail(head, 3);
    InsertAtTail(head, 4);
    InsertAtTail(head, 5);
    InsertAtTail(head, 6);
    // display(head);
    // deleteAtHead(head);
    // deleteAtTail(head);
    display(head);
    loop_detection(head);
    getStartingNode(head);
}