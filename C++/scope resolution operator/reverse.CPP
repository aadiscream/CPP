#include<iostream.h>
#include<conio.h>
class reverse
{
int a,b;
public:
void input();
void cal();
};
void main()
{
clrscr();
reverse a;
a.input();
a.cal();
getch();
}
void reverse::input()
{
cout<<"enter any no = ";
cin>>a;
}
void reverse::cal()
{
while(a>0)
{
b=a%10;
cout<<b;
a=a/10;
}
}
