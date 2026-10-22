#include<iostream.h>
#include<conio.h>
class s_of_digit
{
int x,y,z;
public :
void input()
{
cout<<"entre any no = ";
cin>>x;
z=0;
}
void cal()
{
while(x>0)
{
y=x%10;
z=z+y;
x=x/10;
}
}
void display()
{
cout<<"sum of their digit = "<<z;
}
};
void main()
{
clrscr();
s_of_digit x;
x.input();
x.cal();
x.display();
getch();
}
