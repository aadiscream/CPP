#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int x,y;
cout<<"entre any no =";
cin>>x;
do
{
y=x%10;
cout<<y;
x=x/10;
}
while(x>0);
getch();
}
