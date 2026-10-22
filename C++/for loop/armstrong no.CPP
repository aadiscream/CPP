#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int w,x,y,z;
cout<<"entre any no =";
cin>>w;
x=w;
for(z=0; w>0; w=w/10)
   {
    y=w%10;
    z=z+(y*y*y);
    }
    if(z==x)
    cout<<"Armstrong no";
    else
    cout<<"not a armstrong no";
getch();
}
