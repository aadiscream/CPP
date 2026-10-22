#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a[4],b,c;
cout<<"enter four no =";
for(b=0;b<4;b++)
{
cin>>a[b];
}
c=a[0];
for(b=0;b<4;b++)
{
if(c>a[b])
{
c=a[b];
}
}
cout<<"Smallest no  = "<<c;
getch();
}
