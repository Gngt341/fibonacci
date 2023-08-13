#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
cout<<"Enter the value :\n";
int a,i,f=1,fb=0,f1;
cin>>a;
cout<<"The Fibbonacci Series is:\n"<<fb<<endl<<f<<endl;
for(i=1;i<=(a-2);i++)
{
 f1=fb+f;
 cout<<f1<<endl;
 fb=f;
 f=f1;
}

getch();
}
