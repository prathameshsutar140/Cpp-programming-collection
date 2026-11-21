#include <conio.h>
#include <iostream.h>

class Person
{
    char name[30];
    char gender[30];
    int age;

public:
    void accept()
    {
        cout << "Enter name: " << endl;
        cin >> name;

        cout << "Enter gender: " << endl;
        cin >> gender;

        cout << "Enter age: " << endl;
        cin >> age;
    }

    void display()
    {
        cout << "---------- Person Details --------------" << endl;
        cout << "Name: " << name << endl;
        cout << "Gender: " << gender << endl;
        cout << "Age: " << age << endl;
    }
};

class Emp : public Person
{
    int empid;
    char com[30];
    int sal;

public:
    void get()
    {
        cout << "Enter employee_id: " << endl;
        cin >> empid;

        cout << "Enter company name: " << endl;
        cin >> com;

        cout << "Enter salary: " << endl;
        cin >> sal;
    }

    void put()
    {
        cout << "-------- Employee Details --------" << endl;
        cout << "Emp_id is: " << empid << endl;
        cout << "Company is: " << com << endl;
        cout << "Salary: " << sal << endl;
    }
};

class Prg : public Emp
{
    int num;

public:
    void take()
    {
        cout << "Enter number of programming languages you know: " << endl;
        cin >> num;
    }

    void show()
    {
        cout << "Number of programming languages you know: "
             << num << endl;
    }
};

void main()
{
    Prg p;

    p.accept();
    p.get();
    p.take();

    p.display();
    p.put();
    p.show();

    getch();
    clrscr();
}
