#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
{
clrscr();
char a[10],b[10];
cout<<" enter first string = ";
cin>>a;
cout<<"enter second string = ";
cin>>b;
if(strcmp(a,b)==0)
// agr 0 hota hai to same, -ve to chhota, +ve to bda
cout<<"same";
else
cout<<"not same ";
getch();
}


