#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a[2][2],i,j,p=1;
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
cout<<"Enter no =";
cin>>a[i][j];
}
}
for(i=0;i<2;i++)
 {
 for(j=0;j<2;j++)
 {
 p=p*a[i][j];
 }
 }
cout<<"Sum of element = "<<p;
getch();
}

