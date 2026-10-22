#include<iostream.h>
#include<conio.h>
class inverse
{
int x,y,z;
public :
void input()
{
cout<<"entre any no = ";
cin>>x;
}
void cal()
{
while(x>0)
{
y=x%10;
cout<<y;
x=x/10;
}
}
};
void main()
{
clrscr();
inverse x;
x.input();
x.cal();
getch();
}
