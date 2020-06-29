#include<iostream.h>
#include<conio.h>
void main()
{
  int a,b,*p,*q,sum;
  cout<<"Enter two integers to add\n";
  cin>>a>>b;
  p= &a;
  q=&b;
  sum= *p + *q;
  cout<<"Sum of 2 numbers="<< sum;
}
