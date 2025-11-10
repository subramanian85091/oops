#include<iostream>
using namespace std;
class employee 
{
    int empno;
    string name;
    public:
    employee (int x,string y)
    {
        empno=x;
        name=y;
    }
    void display()
    {
        cout<<"Name:"<<name<<"\nEmployee No:"<<empno<<endl;
    }
};
int main()
{
    employee e1(101,"Gireesh");
    employee e2(102,"Hseerig");
    e1.display();
    e2.display();
    return 0;
}