#include <iostream>
using namespace std;

class Complex {
private:
    float real;
    float imag;

public:
    
    Complex(float r = 0, float i = 0) : real(r), imag(i) {}

    
    void display() const {
        cout << real << " + " << imag << "i" << endl;
    }

    
    Complex operator+(const Complex &obj) const {
        return Complex(real + obj.real, imag + obj.imag);
    }

    
    bool operator==(const Complex &obj) const {
        return (real == obj.real && imag == obj.imag);
    }

    
    bool operator!=(const Complex &obj) const {
        return !(*this == obj); 
    }
};

int main() {
    Complex c1(3, 2), c2(1, 7), c3(3, 2), sum;

    cout << "Complex number 1: ";
    c1.display();
    cout << "Complex number 2: ";
    c2.display();

    
    sum = c1 + c2;
    cout << "\nSum of complex numbers: ";
    sum.display();

    
    cout << "\nComparing complex numbers:\n";
    if (c1 == c3)
        cout << "c1 and c3 are equal.\n";
    else
        cout << "c1 and c3 are not equal.\n";

    if (c1 != c2)
        cout << "c1 and c2 are not equal.\n";
    else
        cout << "c1 and c2 are equal.\n";

    return 0;
}
