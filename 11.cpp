#include <iostream>
using namespace std;

class Complex {
private:
    float real;
    float imag;

public:
   
    Complex(float r = 0, float i = 0) {
        real = r;
        imag = i;
    }

    
    void display() const {
        cout << real << " + " << imag << "i" << endl;
    }

    
    Complex operator+(const Complex &obj) {
        Complex temp;
        temp.real = real + obj.real;
        temp.imag = imag + obj.imag;
        return temp;
    }
};


int main() {
    Complex c1(3.5, 2.5);
    Complex c2(1.6, 4.2);

    cout << "First Complex Number: ";
    c1.display();

    cout << "Second Complex Number: ";
    c2.display();

    
    Complex c3 = c1 + c2;

    cout << "Sum of Two Complex Numbers: ";
    c3.display();

    return 0;
}
