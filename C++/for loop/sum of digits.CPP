#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int x,y,z;
cout<<"entre any no = ";
cin>>x;
for(z=0; x>0; x=x/10)
{
 y=x%10;
 z=z+y;
 }
 cout<<"sum of all digit ="<<z;
getch();
}
