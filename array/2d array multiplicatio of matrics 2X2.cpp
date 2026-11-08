#include <iostream.h>
#include <conio.h>
void main()
{
    clrscr();
    int a[2][2], b[2][2], c[2][2], i, j, k;
    cout << "enter no for first = ";
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << "enter no for second = ";
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            cin >> b[i][j];
        }
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            c[i][j] = 0;
            for (k = 0; k < 2; k++)
            {
                c[i][j] = c[i][j] + a[i][k] * b[k][j];
            }
        }
    }
    cout << "multiplication of matrics = ";
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
    getch();
}
