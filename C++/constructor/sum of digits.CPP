#include<iostream.h>
#include<conio.h>
class sum_of_digit
{
int a,b,c;
public:
sum_of_digit();
void display();
void cal();
};
sum_of_digit::sum_of_digit()
{
cout<<"Enter any no =";
cin>>a;
c=0;
}
void sum_of_digit::cal()
{
while(a>0)
{
b=a%10;
c=c+b;
a=a/10;
}
}
void sum_of_digit::display()
{
cout<<"sum  of digit = "<<c;
}

void main()
{
clrscr();
sum_of_digit x;
x.cal();
x.display();
getch();
}
