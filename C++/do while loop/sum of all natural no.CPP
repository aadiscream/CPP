#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int x,y,z=0;
cout<<"entre any no =";
cin>>x;
do
{
z=z+x;
x--;
}
while(x>0);
cout<<"sum of all natural number = "<<z;
getch();
}
