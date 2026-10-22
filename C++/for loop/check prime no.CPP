#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a,x,y,z;
cout<<"Entre any no =";
cin>>x;
a=0;
for(y=2; y<x; y++)
{
z=x%y;
if(z==0)
{
a=1;
 }
 }
if(a==0)
cout<<"prime no";
else
cout<<"not a prime no";
getch();
}
