#include<iostream.h>
#include<conio.h>
void swap(int*,int*);
void main()
{
	int a,b;
	clrscr();
	cout<<"enter any two numbers"<<endl;
	cin>>a>>b;
	swap(&a,&b);
	cout<<"interchanged values of a and b are"<<a<<"and"<<b;
	getch();
}
void swap(int*x,int*y)
{
	int t;
	t=*x;
	*x=*y;
	*y=t;
}