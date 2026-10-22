#include <iostream>
using namespace std;
int main()
{
    int arr[] = {12, 45, 67, 87, 9}, f, a = 0;
    cout << "enter the no you want to search =";
    cin >> f;
    for (int i = 0; i < 5; i++)
    {
        if (f == arr[i])
        {
            a = 1;
        }
    }
    if (a == 1)
    {
        cout << f << " founded";
    }
    else
    {
        cout << " not founded";
    }
    return 0;
}