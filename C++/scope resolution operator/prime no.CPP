#include<iostream.h>
#include<conio.h>
class prime
{
int a,b,c,p;
public:
void input();
void cal();
void display();
};
void main()
{
clrscr();
prime a;
a.input();
a.cal();
a.display();
getch();
}
void prime::input()
{
cout<<"enter any  no =";
cin>>a;
p=1;
b=2;
}
void prime::cal()
{
while(b<a)
{
c=a%b;
if(c==0)
{
p=0;
}
b++;
}
}
void prime::display()
{
if(p==1)
cout<<"prime";
else
cout<<"not a prime no";
}


