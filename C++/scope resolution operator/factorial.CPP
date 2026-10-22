#include<iostream.h>
#include<conio.h>
class fact
{
int a,b;
public:
fact();
void cal();
void display();
};
fact::fact()
{
cout<<"Enter any no = ";
cin>>a;
b=1;
}
void fact::cal()
{
while(a>0)
{
b=b*a;
a--;
}
}
void fact::display()
{
cout<<"your factorial = "<<b;
}
void main()
{
clrscr();
fact x;
x.cal();
x.display();
getch();
}
