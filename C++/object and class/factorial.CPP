#include<iostream.h>
#include<conio.h>
class fact
{
int x,y,z;
public :
void input()
{
cout<<"entre any no = ";
cin>>x;
y=1;
}
void cal()
{
do
{
y=y*x;
x--;
}
while(x>0);
}
void output()
{
cout<<"factorial = "<<y;
}
};
void main()
{
clrscr();
fact x;
x.input();
x.cal();
x.output();
getch();
}
