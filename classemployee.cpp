#include<iostream>
using namespace std;
class employee
{
	public:
		int empid;
		string name;
		float salary;
		void setemployee(int id, string n,float s)
		{
			empid=id;
			name=n;
			salary=s;
		}
		void displayemployee();		
};
void employee::displayemployee(){
	cout<<"EmployeeID:"<<empid<<",Name:"<<name<<",Salary:"<<salary<<endl;
}
int main ()
{
	employee e1,e2;
	e1.setemployee(101,"Ravi",50000.75);
	e2.setemployee(102,"Rahul",62000.50);
	e1.displayemployee();
	e2.displayemployee();
	return 0;
}
