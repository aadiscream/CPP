#include <iostream>
#include <cmath>

bool isArmstrong(int num)
{
    int originalNum = num;
    int sum = 0;
    int n = 0;

    // Calculate the number of digits
    while (originalNum != 0)
    {
        originalNum /= 10;
        ++n;
    }

    originalNum = num;

    // Calculate the sum of the nth power of its digits
    while (originalNum != 0)
    {
        int digit = originalNum % 10;
        sum += std::pow(digit, n);
        originalNum /= 10;
    }

    return sum == num;
}

int main()
{
    std::cout << "Armstrong numbers from 1 to 500 are: ";
    for (int i = 1; i <= 500; ++i)
    {
        if (isArmstrong(i))
        {
            std::cout << i << " ";
        }
    }
    std::cout << std::endl;
    return 0;
}
