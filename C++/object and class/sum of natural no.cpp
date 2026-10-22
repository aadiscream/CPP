#include<iostream.h>
#include<conio.h>
class natural
{
int a,b,c;
public:
void input()
{
cout<<"Entre any no = ";
cin>>a;
b=0;
}
void cal()
{
while(a>0)
{
b=a+b;
a--;
}
}
void display()
{
cout<<"Sum of all natural number ="<<b;
}
};
void main()
{
clrscr();
natural a;
a.input();
a.cal();
a.display();
getch();
}