#include<iostream.h>
#include<conio.h>
class armstrong
{
int a,b,c,d;
public:
void input();
void cal();
void display();
};
void main()
{
clrscr();
armstrong a;
a.input();
a.cal();
a.display();
getch();
}
void armstrong::input()
{
cout<<"entre any no =";
cin>>b;
a=b;
}
void armstrong::cal()
{
d=0;
while(b>0)
{
c=b%10;
d=d+c*c*c;
b=b/10;
}
}
void armstrong::display()
{
if(d==a)
cout<<"armstrong no";
else
cout<<"not a armstrong no";
}
