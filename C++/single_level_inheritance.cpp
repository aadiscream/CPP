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
class add : public a
{
public:
    int b;

public:
    void sum()
    {
        geta();
        cout << "enter the value of b = ";
        cin >> b;
        cout << "sum of a and b = " << a + b;
    }
};
int main()
{
    add obj;
    obj.sum();
    return 0;
}