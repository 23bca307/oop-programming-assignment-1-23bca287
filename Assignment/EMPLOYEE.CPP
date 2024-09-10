#include<iostream.h>
#include<conio.h>
class employee
{
	int eid,salary;
	char ename[10];
	char department[15];

	public:
	employee()
	{
		cout<<"Enter a eid";
		cin>>eid;
		cout<<"Enter a ename";
		cin>>ename;
		cout<<"Enter a salary";
		cin>>salary;
		cout<<"Enter a department";
		cin>>department;
	}
	void display()
	{
		cout<<"id :"<<eid;
		cout<<"name :"<<ename;
		cout<<"salary :"<<salary;
		cout<<"department :"<<department;
	}
};
void main()
{
	employee emp;
	clrscr();
	emp.display();
	getch();
}



