#include<iostream.h>
#include<conio.h>
class div_by_7
{
int x,y,z;
public :
void input()
{
cout<<"entre any no =";
cin>>x;
}
void cal()
{
for(y=7;y<=x;y=y+7)
{
cout<<y<<" ";
}
}
};
void main()
{
clrscr();
div_by_7 x;
x.input();
x.cal();
getch();
}
