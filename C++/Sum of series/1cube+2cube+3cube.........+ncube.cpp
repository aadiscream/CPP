#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
clrscr();
int n,i,s=0;
cout<<"Enter the value of n = ";
cin>>n;
for(i=1;i<=n;i++)
{
cout<<i<<" + ";
s=s+pow(i,3);
}
cout<<"sum of series = "<<s;
getch();
}
