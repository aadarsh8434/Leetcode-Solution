#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        this->data = value;
        this->next = NULL;
    }

    ~Node() {
        int value = this->data;
        if (this->next != NULL) {
            delete next;
            this->next = NULL;
        }
        cout << "Memory is free for node with data " << value << endl;
    }
};

void insertAthead(Node*& head, int d) {
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}

void insertAttail(Node*& tail, int d) {
    Node* temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

void insertAtmiddle(Node*& head, int position, int d) {
    if (position == 1) {
        insertAthead(head, d);
        return;
    }
    Node* temp = head;
    int cnt = 1;

    while (cnt < position - 1 && temp->next != NULL) {
        temp = temp->next;
        cnt++;
    }

    if (temp->next == NULL) {
        Node* tail = temp; // Update tail in case of insertion at the end
        insertAttail(tail, d);
        return;
    }

    Node* nodeToinsert = new Node(d);
    nodeToinsert->next = temp->next;
    temp->next = nodeToinsert;
}

void deleteNode(int position, Node*& head) {
    if (position == 1) {
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    } else {
        Node* curr = head;
        Node* prev = NULL;
        int cnt = 1;

        while (cnt < position && curr != NULL) {
            prev = curr;
            curr = curr->next;
            cnt++;
        }

        if (curr == NULL) {
            cout << "Position out of range" << endl;
            return;
        }

        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

void printList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* node1 = new Node(2);

    Node* head = node1;
    Node* tail = node1;

    printList(head);

    insertAttail(tail, 15);
    insertAttail(tail, 25);

    printList(head);

    insertAtmiddle(head, 1, 22);
    printList(head);

    cout << "Head: " << head->data << endl;
    cout << "Tail: " << tail->data << endl;

    deleteNode(1, head);
    printList(head);

    return 0;
}
