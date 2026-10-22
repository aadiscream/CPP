#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a[99],i,n,l,m,u,p,s;
cout<<"how many data you want to put = ";
cin>>n;
for(i=0;i<n;i++)
{
cout<<"enter no =";
cin>>a[i];
}
cout<<"enter no to be searched = ";
cin>>s;
l=0;
u=n-1;
m=(l+u)/2;
p=0;
while(l<=u&&p==0)
{
if(s>a[m])
{
l=m+1;
}
else if(s<a[m])
{
u=m-1;
}
else
{
p=m+1;
}
m=(l+u)/2;
}
if(p==0)
cout<<"no is not present";
else
cout<<"no is  present at "<<p<<"cell";
getch();
}

