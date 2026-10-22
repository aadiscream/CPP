#include<iostream.h>
#include<conio.h>
class palindrome
{
int a,b,c,p;
public:
void input();
void cal();
void display();
};
void main()
{
clrscr();
palindrome a;
a.input();
a.cal();
a.display();
getch();
}
void palindrome::input()
{
cout<<"enter any  no =";
cin>>a;
p=a;
c=0;
}
void palindrome::cal()
{
while(a>0)
{
b=a%10;
c=c*10+b;
a=a/10;
}
}
void palindrome::display()
{
if(p==c)
cout<<"palindrome";
else
cout<<"not a palindrome no";
}


