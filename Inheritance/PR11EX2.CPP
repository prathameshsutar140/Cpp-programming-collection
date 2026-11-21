#include<conio.h>
#include<iostream.h>
class Emp
{
	int empno;
	char ename[30];
	char emp_des[30];
	public:
	void accept()
	{
		cout<<"enter a empno:"<<endl;
		cin>>empno;
		cout<<"emp name:"<<endl;
		cin>>ename;
		cout<<"emp_destination :"<<endl;
		cin>>emp_des;
	}
	void display()
	{
		cout<<"empno:"<<empno<<endl;
		cout<<"ename:"<<ename<<endl;
		cout<<"emp_des:"<<emp_des<<endl;
	}
};
class salary : public Emp
{
	int salary;
	public:
	void get()
	{
		cout<<"enter saLARY:"<<endl;
		cin>>salary;
	}
	void put()
	{
		cout<<"salary is :"<<salary<<endl;
	}
};
void main()
{
	salary s;
	cout<<"--------accept the data---------"<<endl;
	s.accept();
	s.get();
	cout<<"-------display--------------"<<endl;
	s.display();
	s.put();
	getch();
	clrscr();
}