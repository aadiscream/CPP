#include<iostream.h>
#include<conio.h>
class febonacci
{
int w,x,y,z;
public:
void input()
{
cout<<"entre any no = ";
cin>>w;
x=0;
y=1;
}
void cal()
{
while(x<w)
{
cout<<x<<endl;
z=x+y;
x=y;
y=z;
}
}
};
void main()
{
clrscr();
febonacci x;
x.input();
x.cal();
getch();
}
