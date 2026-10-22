#include<iostream.h>
#include<conio.h>
class armstrong
{
int a,b,c,d;
public:
armstrong();
void cal();
void display();
};
armstrong::armstrong()
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
void main()
{
clrscr();
armstrong a;
a.cal();
a.display();
getch();
}
