#include<iostream.h>
#include<conio.h>
class reverse
{
int a,b;
public:
reverse();
void cal();
};
reverse::reverse()
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
void main()
{
clrscr();
reverse a;
a.cal();
getch();
}
