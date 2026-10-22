#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a[4],b;
float c=0;
cout<<"enter 4 no =";
for(b=0;b<4;b++)
{
cin>>a[b];
}
for(b=0;b<4;b++)
{
c=c+a[b];
}
c=c/4;
cout<<"Average is = "<<c;
getch();
}
