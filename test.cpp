#include <iostream>
using namespace std;
class Complex
{
private:
    float real;
    float imag;

public:
    Complex(float r = 0, float i = 0) : real(r), imag(i) {}
    Complex operator+(const Complex &obj)
    {
        return Complex(real + obj.real, imag + obj.imag);
    }
    void display() const
    {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main()
{
    Complex c1(3.5, 2.5), c2(1.5, 4.5);
    Complex c3 = c1 + c2;
    cout << "Sum of Complex Numbers: ";
    c3.display();

    return 0;
}