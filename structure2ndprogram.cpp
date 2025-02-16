#include <iostream>
using namespace std;

struct Book {
private:
    int bookid;
    char title[20];
    float price;

public:
    void input() {
        cout << "Enter book ID, title, and price: ";
        cin >> bookid >> title >> price;

        // Check if bookid is negative
        if (bookid < 0) {
            cout << "Book ID cannot be negative. Please enter a valid ID." << endl;
            bookid = 0; // or handle it as you see fit
        }
    }

    void display() {
        cout << "\nBook ID: " << bookid << ", Title: " << title << ", Price: " << price << endl;
    }
};

int main() {
    Book myBook;
    myBook.input();
    myBook.display();
    return 0;
}