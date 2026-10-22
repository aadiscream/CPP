#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a[99],i,s,k=0,n;
cout<<"how much data is you want to store =";
cin>>n;
for(i=0;i<n;i++)
{
cout<<"enter data = ";
cin>>a[i];
}
cout<<"enter the data to be searched = ";
cin>>s;
for(i=0;i<n;i++)
{
if(s==a[i])
{
k=1;
break;
}
}
if(k==1)
cout<<"no is present";
else
cout<<"no is not present";
getch();
}

