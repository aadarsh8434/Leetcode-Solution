#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    // Constructor
    Node(int d) {
        this->data = d;
        this->next = NULL;
    }

    // Destructor
    ~Node() {
        if (this->next != NULL) {
            delete next;
            next = NULL;
        }
        cout << "Memory is freed for node with data: " << this->data << endl;
    }
};

// Insert a node in the circular linked list
void insertNode(Node*& tail, int element, int d) {
    // If the list is empty
    if (tail == NULL) {
        Node* newNode = new Node(d);
        tail = newNode;
        newNode->next = newNode; // Point to itself to make it circular
    } else {
        // Non-empty list: Find the element
        Node* curr = tail;
        do {
            if (curr->data == element) {
                Node* temp = new Node(d);
                temp->next = curr->next;
                curr->next = temp;

                // If inserting after the tail element, update tail
                if (curr == tail) {
                    tail = temp;
                }
                return;
            }
            curr = curr->next;
        } while (curr != tail);

        // Element not found
        cout << "Element " << element << " not found in the list." << endl;
    }
}

// Print the circular linked list
void printList(Node* tail) {
    if (tail == NULL) {
        cout << "The list is empty." << endl;
        return;
    }

    Node* temp = tail;
    do {
        cout << temp->next->data << " ";
        temp = temp->next;
    } while (temp != tail);
    cout << endl;
}
void deleteNode(Node* &tail, int element) {
    if(tail==NULL){
        cout<<"List is empty"<<endl;
        return;
    }
    // if(tail->data== element) {
    //     if(tail->next==tail) {
    //         delete tail;
    //         tail = NULL;
    //     }
        else {
            Node* prev = tail;
            Node* curr = prev->next;
            while(curr->data !=element) {
                prev = curr;
                curr = curr->next;
            }
            prev->next = curr->next;
            if(tail==curr) {
               tail = prev;
            }
            curr->next = NULL;
            delete curr; 
            }
};

int main() {
    Node* tail = NULL;

    // Insert nodes
    insertNode(tail, 5, 3); // Insert into an empty list
    printList(tail);

    insertNode(tail, 3, 5); // Insert after node with value 3
    printList(tail);

    insertNode(tail, 5, 7); // Insert after node with value 5
    printList(tail);

    insertNode(tail, 3, 10); // Insert after node with value 3
    printList(tail);
    insertNode(tail,3,5);
    printList(tail);
    deleteNode(tail,3);
    printList(tail);

    return 0;
}
