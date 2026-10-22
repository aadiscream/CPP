#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a[3][3],i,j,s=0;
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
cout<<"Enter no =";
cin>>a[i][j];
}
}
for(i=0;i<3;i++)
{
s=s+a[i][i];
}
// i=j, isliye i do baar liye hai
cout<<"sum of left diagonal = "<<s;
getch();
}


