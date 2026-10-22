#include <iostream>
using namespace std;
class check
{
public:
    int copy;
    int palindrome(int);
};
int check::palindrome(int num)
{
    int original = num;
    copy = 0;
    for (; num > 0; num = num / 10)
    {
        copy = copy * 10 + (num % 10);
    }
    return (original == copy);
}
int main()
{
    int num1;
    check result;
    cout << "enter any no = ";
    cin >> num1;
    if (result.palindrome(num1))
    {
        cout << "its a palindrome";
    }
    else
    {
        cout << "its not a palindrome";
    }
    return 0;
}
