#include <iostream>
using namespace std;
class a
{
public:
    int a;
    void geta()
    {
        cout << "enter value = ";
        cin >> a;
    }
};
class b : virtual public a
{
public:
    int b;
    void getb()
    {
        cout << "enter value = ";
        cin >> b;
    }
};
class c : virtual public a
{
public:
    int c;
    void getc()
    {
        cout << "enter value = ";
        cin >> c;
    }
};
class add : b, c
{
public:
    int d;
    void sum()
    {
        geta();
        getb();
        getc();
        cout << "enter value = ";
        cin >> d;
        cout << "total sum = " << a + b + c + d;
    }
};
int main()
{
    add obj;
    obj.sum();
}