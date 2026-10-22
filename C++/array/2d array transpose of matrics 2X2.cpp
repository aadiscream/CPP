#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a[2][2],b[2][2],i,j;
cout<<"Enter no ";
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
cout<<"=";
cin>>a[i][j];
}
}
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
cout<<a[i][j]<<" ";
}
cout<<endl;
}
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
b[j][i]=a[i][j];
}
}
cout<<"transpose of matrics = \n";
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
cout<<b[i][j]<<" ";
}
cout<<endl;
}
getch();
}
