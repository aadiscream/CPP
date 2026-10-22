#include<iostream.h>
#include<conio.h>
class febonacci
{
int a,b,c,d;
public:
febonacci();
void cal();
};
febonacci::febonacci()
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
void main()
{
clrscr();
febonacci x;
x.cal();
getch();
}
