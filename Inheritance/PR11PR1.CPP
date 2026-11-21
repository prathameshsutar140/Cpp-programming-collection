#include<iostream.h>
#include<conio.h>

class Stud
{
    int rollno;
    char name[30];
    public:
    void accept()
    {
        cout<<"enter rollno:"<<endl;
        cin>>rollno;
        cout<<"enter name :"<<endl;
        cin>>name;
    }
    void display()
    {
        cout<<"rollno :"<<rollno<<endl;
        cout<<"name is :"<<name<<endl;
    }
};

class Mark : public Stud
{
    int m1, m2, m3;
    float total, per;
    public:
    void get()
    {
        cout<<"enter three sub mark:"<<endl;
        cin>>m1>>m2>>m3;
        
       
        total = m1 + m2 + m3;
        per = (total / 300.0) * 100;
    }
    
    void put()
    {
        cout<<"marks are : "<<m1<<", "<<m2<<", "<<m3<<endl;
        cout<<"total : "<<total<<endl;
        cout<<"percentage : "<<per<<"%"<<endl;
    }
};

void main()
{
    clrscr(); 
    
    Mark m;
    m.accept();
    m.get();
    
    m.display();
    m.put();
    
    getch();
}