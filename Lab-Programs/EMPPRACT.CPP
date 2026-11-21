#include<conio.h>
#include<iostream.h>
class Employee
{	private:
	int EMP_ID;
	int EMP_sal;
	public:
	void getdata()
	{
	cout<<"Enter EMP_ID"<<endl;
	cin>>EMP_ID;
	cout<<"Enter EMP_sal"<<endl;
	cin>>EMP_sal;
	}
	void display()
	{
		cout<<"EMP_ID: "<<EMP_ID<<endl;
		cout<<"EMP_sal"<<EMP_sal<<endl;
	}
};
void main()
{
	Employee e;
	int i,n;


	cout<<"Enter no of employee you want to enter:"<<endl;
	cin>>n;
	for(i=0;i<n;i++)
	{
		e[i].getdata();
	}
	cout<<"----- Detail ------"<<endl;
	for(i=0;i<n;i++)
	{
	e[i].display();
	}
	getch();
	clrscr();
}