#include<iostream.h>
#include<conio.h>
class natural
{
int a,b,c;
public:
natural();
void cal();
void display();
};
natural::natural()
{
cout<<"enter any no = ";
cin>>a;
b=1;
c=0;
}
void natural::cal()
{
while(b<=a)
{
c=c+b;
b++;
}
}
void natural::display()
{
cout<<"sum of natural no = "<<c;
}
void main()
{
clrscr();
natural x;
x.cal();
x.display();
getch();
}
