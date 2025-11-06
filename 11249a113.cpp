#include <iostream>
using namespace std;

class Book {
private:
    string title;
    string author;
    int year;
    string isbn;

public:
    void inputDetails() {
        cout << "Enter book title: ";
        getline(cin, title);
        cout << "Enter author name: ";
        getline(cin, author);
        cout << "Enter publication year: ";
        cin >> year;
        cin.ignore(); // To ignore the newline after year input
        cout << "Enter ISBN: ";
        getline(cin, isbn);
    }

    void displayDetails() {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Year: " << year << endl;
        cout << "ISBN: " << isbn << endl;
    }
};

int main() {
    int n;
    cout << "Enter number of books: ";
    cin >> n;
    cin.ignore(); // Ignore newline after number input

    Book library[n]; // Array of objects

    // Input details of each book
    for (int i = 0; i < n; i++) {
        cout << "\nEnter details for book " << i + 1 << ":\n";
        library[i].inputDetails();
    }

    // Display details of all books
    cout << "\nLibrary Book Details:\n";
    for (int i = 0; i < n; i++) {
        cout << "\nBook " << i + 1 << ":\n";
        library[i].displayDetails();
    }

    return 0;
}