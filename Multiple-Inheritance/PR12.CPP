#include<conio.h>
#include<iostream.h>
class Emp
{
	int emp_id;
        char name[30];
        public:
        void get()
        {
        	cout<<"enter emp_id :"<<endl;
                cin>>emp_id;
                cout<<"enter name of emp:"<<endl;
                cin>>name;
        }
        void put()
        {
        	cout<<"-------- Employee Detail's ---------"<<endl;
                cout<<"Emp_id:"<<emp_id<<endl;
                cout<<"Employee name :"<<name<<endl;
        }
};
class Emp_union
{
	int m_id;
        public:
        void accept()
        {
        	cout<<"enter member id :"<<endl;
                cin>>m_id;
        }
        void display()
        {
        	cout<<"----------- Employee union -------"<<endl;
        	cout<<"memeber id is :"<<m_id<<endl;
        }
};
class Emp_info:public Emp_union,public Emp
{
	int sal;
        public:
        void take()
        {
        	cout<<"enter sal :"<<endl;
		cin>>sal;
	}
	void show()
	{
		cout<<"salary is :"<<sal<<endl;
	}
};
void main()
{
	Emp_info e;
        e.get();
        e.accept();
        e.take();
        cout<<"---------- output -------"<<endl;
        e.put();
        e.display();
        e.show();
        getch();
        clrscr();
}