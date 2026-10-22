#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int x,y,z;
cout<<"Entre any no =";
cin>>x;
z=1;
do
{
z=z*x;
x--;
}
while(x>0);
cout<<z;
getch();
}
