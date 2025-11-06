#include <iostream>
#include <string>
using namespace std;

class AddString {
private:
    string str;
public:
   
    AddString() {}
    AddString(string s) {
        str = s;
    }

   
    AddString operator+(const AddString &obj) {
        AddString temp;
        temp.str = str + obj.str;
        return temp;
    }

   
    void display() {
        cout << str << endl;
    }
};

int main() {
    AddString s1("Hello ");
    AddString s2("World!");
    AddString s3;

    s3 = s1 + s2;  

    cout << "Result of string addition: ";
    s3.display();

    return 0;
}