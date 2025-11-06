#include<iostream>
using namespace std;
class student
{
	public:
		int rollno;
		string name;
		int m1,m2,m3;
		float average()
		{
			return (m1+m2+m3)/3;
		}
		void display()
		{
			cout<<"Roll No:"<<rollno<<endl;
			cout<<"Name:"<<name<<endl;
			cout<<"Average marks:"<<average()<<endl;
			
		}
};
int main()
{
	student s1;
	s1.rollno;
	s1.name="Nirmal";
	s1.m1=85;
	s1.m2=80;
	s1.m3=75;
	s1.display();
	return 0;
}
