#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* prev;
    Node* next;

    Node(int d) {
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }
};

// Traversing a linked list
void print(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Gives length of linked list
int getlength(Node* head) {
    int len = 0;
    Node* temp = head;
    while (temp != NULL) {
        len++;
        temp = temp->next;
    }
    return len;
}

// Insert at head
void insertathead(Node*& head, int d) {
    if (head == NULL) {
        Node* temp = new Node(d);
        head = temp;
    }
    else {
        Node* temp = new Node(d);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

// Insert at tail
void insertattail(Node*& tail, Node*& head, int d) {
    Node* temp = new Node(d);
    if (tail == NULL) {
        // If list is empty, set both head and tail
        tail = temp;
        head = temp;
    } else {
        tail->next = temp;  // Corrected: Insert new node at the end
        temp->prev = tail;
        tail = temp;
    }
}

// Insert at a specific position
void insertatposition(Node*& head, Node*& tail, int d, int pos) {
    // Insert at start
    if (pos == 1) {
        insertathead(head, d);
        if (tail == NULL) {
            tail = head; // If list was empty, set tail as head
        }
        return;
    }

    Node* temp = head;
    int cnt = 1;

    // Traverse to the position before the desired position
    while (cnt < pos - 1 && temp != NULL) {
        temp = temp->next;
        cnt++;
    }

    // Insert at the end if the position is beyond the last node
    if (temp == NULL || temp->next == NULL) {
        insertattail(tail, head, d);  // Corrected: Pass head as well
        return;
    }

    // Inserting in the middle
    Node* nodeToinsert = new Node(d);
    nodeToinsert->next = temp->next;
    temp->next = nodeToinsert;
    nodeToinsert->prev = temp;

    // Fix the previous pointer of the next node
    if (nodeToinsert->next != NULL) {
        nodeToinsert->next->prev = nodeToinsert;
    } else {
        tail = nodeToinsert; // Update tail if inserted at the end
    }
}
void deleteNode(int position,Node* &head) {
    if(position == 1) {
        Node* temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }
    else {
        Node* curr = head;
        Node* prev = NULL;
        int cnt=1;
        while(cnt<position && curr!=NULL){
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        curr->prev =NULL;
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;

        }
    }
    


int main() {
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;

    print(head);
    cout << "Length: " << getlength(head) << endl;

    insertathead(head, 11);
    print(head);
    insertathead(head, 25);
    print(head);
    insertathead(head, 23);
    print(head);

    insertattail(tail, head, 35);  // Corrected: Pass head as well
    print(head);

    insertatposition(head, tail, 100, 2);
    print(head);

    insertatposition(head, tail, 105, 10);
    print(head);
    deleteNode(1,head);
    print(head);


    return 0;
}
