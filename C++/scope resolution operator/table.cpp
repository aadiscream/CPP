#include<iostream.h>
#include<conio.h>
class table
{
int x,y;
public:
void input();
void cal();
};
void table::input()
{
cout<<"enter any no = ";
cin>>x;
y=1;
}
void table::cal()
{
while(y<=10)
{
cout<<x*y<<endl;
y++;
}
}
void main()
{
clrscr();
table a;
a.input();
a.cal();
getch();
}
