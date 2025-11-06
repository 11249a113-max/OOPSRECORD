#include <iostream>
using namespace std;

class Demo {
public:
    // Constructor
    Demo() {
        cout << "Constructor called: Object created." << endl;
    }

    // Destructor
    ~Demo() {
        cout << "Destructor called: Object destroyed." << endl;
    }
};

int main() {
    cout << "Creating object d1:" << endl;
    Demo d1;  // Constructor will be called here

    cout << "End of main function." << endl;

    return 0;
}