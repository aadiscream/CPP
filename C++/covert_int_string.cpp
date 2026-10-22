#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    int a;
    cout << "Enter a number: ";
    cin >> a;
    string b = to_string(a);
    cout << b.length();
    return 0;
}