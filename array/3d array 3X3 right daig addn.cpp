#include <iostream.h>
#include <conio.h>
void main()
{
    clrscr();
    int a[3][3], i, j, k = 2, s = 0;
    cout << "Enter no =";
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << "=";
            cin >> a[i][j];
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    for (i = 0; i < 3; i++)
    {
        s = s + a[i][k];
        k--;
    }
    cout << "sum of right
}
