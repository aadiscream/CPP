#include <iostream>
using namespace std;
class a
{
public:
    int a;

public:
    void geta()
    {
        cout << "enter the value of a = ";
        cin >> a;
    }
};
class b
{
public:
    int b;

public:
    void getb()
    {
        cout << "enter the value of b = ";
        cin >> b;
    }
};
class c
{
public:
    int c;

public:
    void getc()
    {
        cout << "enter the value of c = ";
        cin >> c;
    }
};
class add : public a, public b, public c
{
public:
    int d;

public:
    void sum()
    {
        geta();
        getb();
        getc();
        cout << "enter the value of d = ";
        cin >> d;
        cout << "sum of a,c,d and b = " << a + b + c + d;
    }
};
int main()
{
    add obj;
    obj.sum();
    return 0;
}