#include <iostream>
int fact(int n)
{
    int i = 1, fact = 1;
    while (i <= n)
    {
        fact *= i;
        i++;
    }
    return fact;
};
int main()
{
    int n, num, i;
    printf("enter the numbe: ");
    scanf("%d", &num);
    printf(" factorial of given no:%d ", fact(num));
}