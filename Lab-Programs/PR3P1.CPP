#include<conio.h>
#include<iostream.h>
void main()
{
	int a,b;
	float res;
	a=21;
	b=5;
	cout<<"implicet type casting:"<<endl;
	cout<<"Result:"<<a/b<<endl;
	cout<<"\nexplicite type casting:"<<endl;
	res=(float)21/5;
	cout<<"the value of variable(res) is:"<<res<<endl;
	getch();
	clrscr();
}