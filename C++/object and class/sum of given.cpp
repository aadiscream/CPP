#include<iostream.h>
#include<conio.h>
class abc
{
int a,b,c;
public:
void input()
{
cout<<"entre any no =";
cin>>a>>b;
}
void cal()
{
c=a+b;
}
void display()
{
cout<<"Sum = "<<c;
}
};
void main()
{
clrscr();
abc x;
x.input();
x.cal();
x.display();
getch();
}