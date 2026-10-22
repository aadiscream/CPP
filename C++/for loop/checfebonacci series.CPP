#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a,x,y,z;
cout<<"Entre any no =";
cin>>x;
for(y=0,z=1; y<=x; a=y+z,y=z,z=a)
{
cout<<y<<" ";
}
getch();
}
