#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n, temp, sum = 0, d = 0;
    cout << "Enter a number: ";
    cin >> n;
    temp = n;
    while (temp != 0)
    {
        temp /= 10;
        d++;
    }
    temp = n;
    while (temp != 0)
    {
        int digit = temp % 10;
        sum += pow(digit, d);
        temp /= 10;
    }
    if (sum == n)
    {
        cout << n << " is an Armstrong number." << endl;
    }
    else
    {
        cout << n << " is not an Armstrong number." << endl;
    }

    return 0;
}