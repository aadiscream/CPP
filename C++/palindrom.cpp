#include <iostream>
using namespace std;
int main()
{
    int no, no1;
    cout << "enter any no = ";
    cin >> no;
    no1 = no;
    int copy = 0;
    for (int i = 0; i < no; no /= 10)
    {
        copy = copy * 10 + (no % 10);
    }

    if (no1 == copy)
    {
        cout << "its a palindrome";
    }
    else
    {
        cout << "its not a palindrome";
    };
    return 0;
}