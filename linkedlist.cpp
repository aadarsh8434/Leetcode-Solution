#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;
struct  Node {
    int data;
    Node *next;
 Node(int data) {
    this->data = data;
    this->next = NULL;
 }
 };
 int main() {
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(5);

    Node* temp= head;
    while(temp!=NULL) {
        cout<<temp->data<<endl;
        temp=temp->next;
    }
    cout<<"nullptr"<<endl;
    temp = head;
    while(temp!=NULL) {
      Node* toDelete = temp;
      temp=temp->next;
      delete toDelete;
    }
    return 0;

 }






