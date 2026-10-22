#include<iostream.h>
#include<conio.h>
class prime
{
int p,x,y,z;
public:
void input()
{
cout<<"entre any no =";
cin>>x;
p=1;
y=2;
}
void cal()
{
while(y<x)
{
z=x%y;
if(z==0)
{
p=0;
}
y++;
}
}
void display()
{
if(p==1)
cout<<"prime no";
else
cout<<"not a prime no";
}
};
void main()
{
clrscr();
prime x;
x.input();
x.cal();
x.display();
getch();
}
