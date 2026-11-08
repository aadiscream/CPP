#include <iostream>
using namespace std;
class test
{
    int a = 0;
    int b = 1;
    int c;

public:
    test(int n)
    {
        for (; n > 0; n--)
        {
            cout << a << endl;
            c = a + b;
            a = b;
            b = c;
        }
    }
};
int main()
{
    cout << "enter any no = ";
    int i;
    cin >> i;
    test febo(i);
    return 0;
}