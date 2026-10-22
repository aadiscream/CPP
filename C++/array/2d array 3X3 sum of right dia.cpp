#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a[3][3],i,j,s=0;
cout<<"Enter no =";
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
cin>>a[i][j];
}
}
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
cout<<a[i][j]<<" ";
}
cout<<endl;
}
for(i=0;i<3;i++)
s=s+a[i][3-i-1]; //[3-i-1] is liye qki j ka value  tha 0-1-2
cout<<"Sum of right diagonal  = "<<s;
getch();
}

