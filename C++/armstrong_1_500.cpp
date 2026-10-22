#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int armstrong[2], copy, power;
    armstrong[0] = 1;
    while (armstrong[0] <= 500)
    {
        power = 0;
        copy = 0;
        armstrong[1] = armstrong[0];
        // calculate the power of the number
        while (armstrong[1] > 0)
        {
            power++;
            armstrong[1] /= 10;
        }
        armstrong[1] = armstrong[0];
        // calculate the armstrong number
        while (armstrong[1] > 0)
        {
            copy += pow(armstrong[1] % 10, power);
            armstrong[1] /= 10;
        }
        // check if the number is armstrong
        if (copy == armstrong[0])
        {
            cout << copy << endl;
        }
        armstrong[0]++;
    }
    return 0;
}