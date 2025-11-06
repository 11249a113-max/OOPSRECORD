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

   
    Complex add(Complex c) {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }

    
    void display() {
        cout << real;
        if(imag >= 0)
            cout << " + " << imag << "i" << endl;
        else
            cout << " - " << -imag << "i" << endl;
    }
};

int main() {
    Complex c1(3.5, 2.5), c2(1.5, 4.5);
    Complex c3;

    c3 = c1.add(c2);  

    cout << "First complex number: ";
    c1.display();

    cout << "Second complex number: ";
    c2.display();

    cout << "Sum of complex numbers: ";
    c3.display();

    return 0;
}