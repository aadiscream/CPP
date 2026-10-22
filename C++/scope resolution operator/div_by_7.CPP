#include<iostream.h>
#include<conio.h>
class div_by_7
{
int a,b;
public:
void input();
void cal();
};
void div_by_7::input()
{
cout<<"Enter any no =";
cin>>a;
b=7;
}
void div_by_7::cal()
{
while(b<=a)
{
cout<<b<<endl;
b=b+7;
}
}
void main()
{
clrscr();
div_by_7 x;
x.input();
x.cal();
getch();
}
