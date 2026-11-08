#include <iostream>
using namespace std;
int main()
{
    int no, n;
    bool prime = true;
    cout << "enter any no = ";
    cin >> no;
    for (n = 2; n < no; n++)
    {
        if (no % n == 0)
        {
            prime = false;
            goto result;
        }
    }
result:
    if (prime == false || no == 1 || no == 0)
    {
        cout << no << " is not a prime no";
    }
    else
    {
        cout << no << " is a prime no";
    }
    return 0;
}