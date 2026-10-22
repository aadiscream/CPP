#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a[2][2]={{4,6},{9,12}},i,j;
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
cout<<a[i][j]<<" ";
}
cout<<endl;
}
getch();
}