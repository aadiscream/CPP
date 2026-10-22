#include<iostream.h>
#include<conio.h>
class febonacci
{
int a,b,c,d;
public:
void input();
void cal();
};
void main()
{
clrscr();
febonacci x;
x.input();
x.cal();
getch();
}
void febonacci::input()
{
cout<<"enter any no = ";
cin>>a;
b=0;
c=1;
}
void febonacci::cal()
{
while(b<a)
{
cout<<b<<endl;
d=c+b;
b=c;
c=d;
}
}
