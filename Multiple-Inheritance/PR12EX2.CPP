#include<conio.h>
#include<iostream.h>
class Sub1
{
	public:
	int m1;
        void getm1()
        {
        	cout<<"enter sub 1 mark :"<<endl;
                cin>>m1;
        }
};
class Sub2
{
	public:
	int m2;
        void getm2()
        {
        	cout<<"enter sub 2 mark :"<<endl;
                cin>>m2;
        }
};
class Sub3
{
	public:
	int m3;
        void getm3()
        {
        	cout<<"enter sub 3 mark :"<<endl;
                cin>>m3;
        }
};
class Sub4
{
	public:
	int m4;
        void getm4()
        {
        	cout<<"enter sub 4 mark :"<<endl;
                cin>>m4;
        }
};
class Sub5
{
	public:
	int m5;
        void getm5()
        {
        	cout<<"enter sub 5 mark :"<<endl;
                cin>>m5;
        }
};
class Sub6
{
	public:
	int m6;
        void getm6()
        {
        	cout<<"enter sub 6 mark :"<<endl;
                cin>>m6;
        }
};
class Result:public Sub1,public Sub2,public Sub3,public Sub4,public Sub5,public Sub6
{
	int total;
        int  per;
        public :
        void get()
        {
        	getm1();
		getm2();
                getm3();
		getm4();
		getm5();
		getm6();
        }
        void cal()
        {
        	total = m1 + m2 + m3 + m4 + m5 + m6;
                per = total / 6.0;
                cout<<"total mark:"<<total<<endl;
                cout<<"per:"<<per<<endl;

        }
};
void main()
{
	Result r;
        cout<<"----- enter mark's --------"<<endl;
        r.get();
        r.cal();
        getch();
        clrscr();
}