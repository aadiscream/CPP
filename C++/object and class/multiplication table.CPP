#include<iostream.h>
#include<conio.h>
class multi
{
int x,y;
public:
void input()
{
cout<<"entre any no = ";
cin>>x;
y=1;
}
void cal()
{
while(y<=10)
{
cout<<x*y<<endl;
y++;
}
}
};
void main()
{
clrscr();
multi x;
x.input();
x.cal();
getch();
}
