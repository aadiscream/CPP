#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int x,y,z,a;
cout<<"entre any no =";
cin>>x;
cout<<x<<endl;
a=x;
z=0;
while(x>0)
{
y=x%10;
z=z*10+y;
x=x/10;
}
cout<<endl<<z<<endl<<a<<endl;
if(z==a)
cout<<"Palindrome no";
else
cout<<"not a palindrome no";
getch();
}


