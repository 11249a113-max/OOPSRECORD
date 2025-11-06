#include <iostream>
#include <string>
using namespace std;


class Book {
    private:
        string title;
        
        string author;
        int year;
        double price;
        public:
            cout << "Book Details:" << endl;
            cout << "Title: " << title << endl;
            cout << "Author: " << author << endl;
            cout << "Year of Publication: " << year << endl;
            cout << "Price: $" << price << endl;
        }
}; Book(string t, string a, int y, double p) {
            title = t;
            author = a;
            year = y;
            price = p;
        }

        
        void displayDetails() {

int main() {
    
    Book book1("The Catcher in the Rye", "J.D. Salinger", 1951, 19.99);


    book1.displayDetails();

    return 0;
}