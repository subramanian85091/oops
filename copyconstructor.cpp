#include<iostream>
using namespace std;
class bank
{
    int accno;
    string name;
    float balance;
    public:
    bank(int a,string n,float b)
    {
        accno=a;
        name=n;
        balance=b;
    }
    bank(const bank & b)
    {
        accno=b.accno;
        name=b.name;
        balance=b.balance;
    }
    void display()
    {
        cout<<"Account Number:"<<accno<<endl;
        cout<<"Name:"<<name<<endl;
        cout<<"Balance"<<balance<<endl;
    }
};
int main()
{
    bank b1(12345,"Gireesh",100000);
    bank b2(b1);
    cout<<"Bank details\n";
    b1.display();
    cout<<"\nBank details using copy constructor\n";
    b2.display();
    return 0;
}