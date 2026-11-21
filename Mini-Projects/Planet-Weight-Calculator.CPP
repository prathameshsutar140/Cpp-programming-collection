#include<conio.h>
#include<iostream.h>
class Planet
{
	static float g;
	public :

	static void setgravity(float x)
	{
		g=x;
	}
	float weight( float m)
	{
		return m*g;
	}
};
float planet:: float g;
void main()
{
	float m,w;
	int ch
	cout<<"enter mass of object in (kg):"<<endl;
	cin>>m;
	cout<<"1:mercury\n 2:venus\n 3:earth\n 4:mars\n 5:jupiter\n 6:satern\n 7:uranes\n 8:neptune\n"<<endl;
	cout<<"enter choice:"<<endl;
	cin>>ch;
	switch(ch)
	{
		case 1:planet::setgravity(3.7)break;
		case 2:planet::setgravity(8.87)break;
		case 3:planet::setgravity(9.81)break;
		case 4:planet::setgravity(3.71)break;
		case 5:planet::setgravity(24.79)break;
		case 6:planet::setgravity(10.44)break;
		case 7:planet::setgravity(8.65)break;
		case 8:planet::setgravity(11.15)break;
		default:cout<<"invalid choice "<<endl;
		break;
	}
	planet p
	w=p.weight(m);
	cout<<"weight is :"<<w<<endl;
	getch();
	clrscr();
}

