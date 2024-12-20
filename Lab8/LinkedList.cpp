#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

void insert_at_end(Node* &head, int val){
    Node* n = new Node();
    n->data = val;
    n->next = nullptr;
    if(head == nullptr){
        head = n;
        return;
    }
    Node* temp = head;
    while(temp->next != nullptr){
        temp = temp->next;
    }
    temp->next = n;
}

void insert_at_begin(Node* &head, int val){
    Node* n = new Node();
    n->data = val;
    n->next = head;
    head = n;
}

void display(Node* head){
    Node* temp = head;
    while(temp != nullptr){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void delete_at_begin(Node* &head){
    Node* todelete = head;
    head = head->next;
    delete todelete;
}


int main(){
    Node* head = nullptr;
    insert_at_begin(head, 0);
    insert_at_end(head, 1);
    insert_at_end(head, 2);
    insert_at_end(head, 3);
    insert_at_end(head, 4);
    insert_at_end(head, 5);
    insert_at_begin(head, 0);
    display(head);
    delete_at_begin(head);
    display(head);
    return 0;
}
