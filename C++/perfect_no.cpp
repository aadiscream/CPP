#include <iostream>
using namespace std;
int main()
{
    int no, sum = 0;
    cout << "enter any no = ";
    cin >> no;
    for (int i = 1; i < no; i++)
    {
        if (no % i == 0)
        {
            sum += i;
        }
    }
    if (sum == no)
    {
        cout << no << " is a perfect no ";
    }
    else
        cout << no << " is not a perfect no";
    return 0;
}