#include <iostream>
using namespace std;
int main()
{
    int matrix[3][3], tran[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "enter the value at matric" << i << j << " = ";
            cin >> matrix[i][j];
        }
    }
    cout << "transpose of the matric \n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matrix[j][i];
        }
        cout << endl;
    }
    return 0;
}