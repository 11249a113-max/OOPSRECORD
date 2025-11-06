#include <iostream>
#include <string>
using namespace std;

// Define the class to represent a book
class Book {
private:
    string title;
    string author;
    int year;
    string ISBN;

public:
    // Constructor to initialize the book details
    Book(string t, string a, int y, string i) {
        title = t;
        author = a;
        year = y;
        ISBN = i;
    }

    // Function to display book details
    void displayBookDetails() {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Year of Publication: " << year << endl;
        cout << "ISBN: " << ISBN << endl;
        cout << "----------------------------" << endl;
    }
};

int main() {
    // Creating an array of book objects (size 3 for this example)
    Book library[3] = {
        Book("The Great Gatsby", "F. Scott Fitzgerald", 1925, "9780743273565"),
        Book("1984", "George Orwell", 1949, "9780451524935"),
        Book("To Kill a Mockingbird", "Harper Lee", 1960, "9780061120084")
    };

    // Displaying details of each book
    cout << "Library Book Details:" << endl;
    for (int i = 0; i < 3; i++) {
        library[i].displayBookDetails();
    }

    return 0;
}