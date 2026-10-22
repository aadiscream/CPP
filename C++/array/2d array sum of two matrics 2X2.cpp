#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a[2][2],b[2][2],c[2][2],i,j;
cout<<"Enter no ";
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
cout<<"=";
cin>>a[i][j];
}
}
cout<<"Enter no for 2nd ";
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
cout<<"=";
cin>>b[i][j];
}
}
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
c[i][j]=a[i][j]+b[i][j];
}
}
cout<<"sum of matrics = \n";
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
cout<<c[i][j]<<" ";
}
cout<<endl;
}
getch();
}
