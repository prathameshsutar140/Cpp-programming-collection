#include<conio.h>
#include<iostream.h>
#define pi 3.14
class Area
{
	float r,result;
	public:
	void accept();
	void cal();
	void display();
};
void Area::accept()
{
	cout<<"enter a radius of circule :"<<endl;
	cin>>r;
}
void Area::cal()
{
	result=pi*(r*r);
}
void Area::display()
{
	cout<<"------area of circule is give below-----------"<<endl;
	cout<<"radius:"<<r<<endl;
	cout<<"result:"<<result<<endl;
}
void main()
{
	Area a;
	a.accept();
	a.cal();
	a.display();
	getch();
	clrscr();
}