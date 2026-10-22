#include<iostream.h>
#include<conio.h>
class div_by_7
{
int a,b;
public:
div_by_7();
void cal();
};
div_by_7::div_by_7()
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
x.cal();
getch();
}
