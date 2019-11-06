#include<iostream>
using namespace std;
class student
{
char name[20];
int id,m1,m2;
int res;
int tot;
	public:
	void getData()
	{
		cout<<"enter name of student:"<<endl;
		cin>>name;
		cout<<"enter id:"<<endl;
		cin>>id;
		cout<<"enter mark1 & mark2:"<<endl;
		cin>>m1>>m2;
		cout<<"\n";
	}
	void total()
	{
		tot=m1+m2;
	}
	void result()
	{
		if(tot>35)
		cout<<"result:pass"<<endl;
		else
		cout<<"result:fail"<<endl;
	}
	void putData()
	{
		cout<<"Name of student:"<<name<<endl;
		cout<<"Id of student:"<<id<<endl;
		cout<<"marks of student:"<<"\n"<<"mark1:"<<m1<<"\t"<<"mark2:"<<m2<<endl;
		cout<<"total marks:"<<tot<<endl;
	}
};
	int main()
	{
		student s;
		s.getData();
		s.total();
		s.putData();
		s.result();
		student stu[2];
		int i;
		for(i=1;i<=2;i++)
		stu[i].getData();
		for(i=1;i<=2;i++)
		stu[i].putData();
		stu[i].total();
		stu[i].result();
		return 0;
	}
