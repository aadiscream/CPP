#include<iostream.h>
#include<conio.h>
class table
{
int x,y;
public:
table();
void cal();
};
table::table()
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
a.cal();
getch();
}
