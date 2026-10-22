#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int x,y,z;
cout<<"entre any no =";
cin>>x;
for(; x>0; x=x/10)
{
y=x%10;
cout<<y;
}
getch();
}
