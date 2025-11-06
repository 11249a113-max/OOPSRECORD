#include <iostream>
using namespace std;


inline int square(int x) {
    return x * x;
}

int main() {
    int num1 = 5, num2 = 10;

    cout << "Square of " << num1 << " is: " << square(num1) << endl;
    cout << "Square of " << num2 << " is: " << square(num2) << endl;

    return 0;
}
