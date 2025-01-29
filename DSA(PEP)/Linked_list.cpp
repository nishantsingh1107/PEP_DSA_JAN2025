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

void inserAtTail(Node* &head, int val){
    Node* n = new Node(val);

    if(head == NULL){
        head = n;
        return;
    }
    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }

    temp->next = n;
}

void insertAtHead(Node* &head, int val){
    Node* n = new Node(val);
    n->next = head;
    head = n;
}

void display(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

void search(Node* head, int key){
    Node* temp = head;
    while(temp != NULL){
        if(temp->data == key){
            cout<<key<<" Found."<<endl;
            return;
        }
        temp = temp->next;
    }
    cout<<key<<" not found."<<endl;
}

void deletion(Node* &head, int key){
    Node* temp = head;
    if(head == NULL) return;
    while(temp->next->data != key){
        temp = temp->next;
    }
    Node* del = temp->next;
    temp->next = temp->next->next;
    delete del;
}

void deleteAtHead(Node* &head){
    Node* temp = head;
    head = head->next;
    delete temp;
}

Node* reverse_ll(Node* &head){
    Node* prev = NULL;
    Node* curr = head;
    Node* next; 
    while(curr != NULL){
        next = curr->next;
        curr->next = prev;
        prev =  curr;
        curr = next;
    }
    head = prev;
}

// Node* K_reversal(Node* &head, int k){
//     Node* prev = NULL;
//     Node* curr = head;
//     Node* next;
//     int count = 0;

//     while(count < k && curr != NULL){
//         next = curr->next;
//         curr->next = prev;
//         prev =  curr;
//         curr = next;
//         count++;
//     }
//     if(next != NULL) head->next = K_reversal(next, k);
//     return prev;
// }

int main(){
    Node* head = NULL;
    insertAtHead(head, 1);
    insertAtHead(head, 2);
    insertAtHead(head, 3);
    inserAtTail(head, 4);
    inserAtTail(head, 5);
    inserAtTail(head, 6);
    // display(head);
    // search(head, 5);
    // deletion(head, 5);
    // display(head);
    // reverse_ll(head);
    display(head);
    // K_reversal(head, 2);
    display(head);

}