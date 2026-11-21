#include<conio.h>
#include<iostream.h>
class furniture
{

	char material[30];
	int price;
	public:
       void accept()
       {

		cout<<"enter name of material you recquired:"<<endl;
		cin>>material;
		cout<<"enter price:"<<endl;
		cin>>price;
       }
       void display()
       {
		cout<<"material is :"<<material<< endl;
		cout<<"price is :"<<price<<endl;
       }
};
class table:public furniture
{
	public:
	int height;
	void get()
	{
		cout<<"height of table is :"<<endl;
		cin>>height;

	}
	void show()
	{
		cout<<"height is :"<<height<<endl;
	}
};
void main()
{
	table t;
	t.get();
	t.accept();
	t.display();
	t.show();
	getch();
	clrscr();
}
