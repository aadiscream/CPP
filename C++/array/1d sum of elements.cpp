#include<iostream.h>
#include<conio.h>
void main()
{
int a[4],b=0,i;
cout<<"Enter any no  =";
for(i=0;i<4;i++)
{
cin>>a[i];
}
for(i=0;i<4;i++)
{
b=b+a[i];
}
cout<<"total sum = "<<b;
getch();
}

