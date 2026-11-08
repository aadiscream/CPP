#include <iostream>
using namespace std;

class cn
{
public:
    int real;
    int imaginary;

    cn(int real, int imaginary)
    {
        this->real = real;
        this->imaginary = imaginary;
    }

    void print()
    {
        cout << real << " + " << imaginary << "i" << endl;
    }

    cn operator+(cn &cz)
    {
        cn c2(0, 0);
        c2.real = this->real + cz.real;
        c2.imaginary = this->imaginary + cz.imaginary;
        return c2;
    }
};

int main()
{
    cn c1(3, 5);
    cn c2(2, 4);
    cn c3 = c1 + c2;
    c3.print();
    return 0;
}
