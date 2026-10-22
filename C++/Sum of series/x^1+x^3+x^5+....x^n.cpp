#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
clrscr();
int i,n,s=0,x;
cout<<"enter the value of x = ";
cin>>x;
cout<<"enter the term (n) = ";
cin>>n;
for(i=1; i<=n; i=i+2)
{
s=s+pow(x,i);
}
cout<<"sum of series = "<<s;
getch();
}
