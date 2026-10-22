#include<iostream.h>
#include<conio.h>
class armstrong
{
int a,x,y,z;
public:
void input()
{
cout<<"entre any no =";
cin>>x;
a=x;
z=0;
}
void cal()
{
while(x>0)
{
y=x%10;
z=z+(y*y*y);
x=x/10;
}
}
void display()
{
if(z==a)
cout<<"armstrong no.";
else
cout<<"not a armstrong no. ";
}
};
void main()
{
clrscr();
armstrong x;
x.input();
x.cal();
x.display();
getch();
}
