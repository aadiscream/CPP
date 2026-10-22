#include <iostream>
using namespace std;
class abc
{
public:
    int a;
    void dispaly()
    {
        cout << "this is " << a;
    }
};
int main()
{
    abc a;
    abc *ptr = &a;
    ptr->a = 12;
    ptr->dispaly();
    return 0;
}