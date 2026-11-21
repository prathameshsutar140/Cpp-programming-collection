#include<conio.h>
#include<iostream.h>
class Staff
{
	char name[50];
	float da,basic,hr,gs;
	public :
	void accept();
	void cal();
	void display();
};
	void Staff::accept()
	{
		cout<<"enter name:"<<endl;
		cin>>name;
		cout<<"enter basic salary:"<<endl;
		cin>>basic;
	}
	void Staff:: cal()
	{
		da= 0.745 * basic;
		hr=0.30 * basic;
		gs= basic + hr + da;
	}
	void Staff::display()
	{
		cout<<"------output--------"<<endl;
		cout<<"name :"<<name<<endl;
		cout<<"basic salary:"<<basic<<endl;
		cout<<"DA :"<<da<<endl;
		cout<<"HRA:"<<hr<<endl;
		cout<<"Gross_salary :"<<gs<<endl;
	}
void main()
{
	Staff s;
	s.accept();
	s.cal();
	s.display();
	getch();
	clrscr();
}