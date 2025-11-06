#include<iostream>
using namespace std;
class patient
{
	public:
		int pid;
		string name;
		string disease;
		void setpatient(int id, string n,string d)
		{
			pid=id;
			name=n;
			disease=d;
		}
		void showpatient();		
};
void patient::showpatient(){
	cout<<"PatientID:"<<pid<<",Name:"<<name<<",Disease:"<<disease<<endl;
}
int main ()
{
	patient p1,p2;
	p1.setpatient(301,"Nirmal","Fever");
	p1.setpatient(302,"Nirmal S","AIDS");
	p1.showpatient();
	p2.showpatient();
	return 0;
}
