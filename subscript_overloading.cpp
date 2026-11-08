#include <iostream>
using namespace std;
class arr
{
public:
    int a[5];
    arr(int *s)
    {
        int i;
        for (i = 0; i < 5; i++)
        {
            a[i] = s[i];
        }
    }
    int operator[](int k)
    {
        return (a[k]);
    }
};
int main()
{
    int x[5] = {1, 2, 3, 4, 5};
    arr A(x);
    int i;
    for (i = 0; i < 5; i++)
    {
        cout << x[i] << endl;
    }
    return 0;
}