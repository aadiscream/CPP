#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a[2][2],i,j,l;
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
cout<<"Enter no =";
cin>>a[i][j];
}
}
l=a[0][0];
for(i=0;i<2;i++)
 {
 for(j=0;j<2;j++)
 {
 if(l>a[i][j])
 l=a[i][j];
 }
 }
cout<<"smallest element = "<<l;
getch();
}

