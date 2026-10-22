#include<iostream.h>
#include<conio.h>
class sum_of_digit
{
int a,b,c;
public:
void input();
void display();
void cal();
};
void main()
{
clrscr();
sum_of_digit x;
x.input();
x.cal();
x.display();
getch();
}
void sum_of_digit::input()
{
cout<<"Enter any no =";
cin>>a;
c=0;
}
void sum_of_digit::display()
{
cout<<"sum  of digit = "<<c;
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
