#include<iostream>
using namespace std;
class student
{
    public:
    string name;
    int age;
    student()
    {
        name="unknown";
        age=20;
        cout<<"\tDefault constructor\n";
    }
    student(string n,int a)
    {
        name=n;
        age=a;
        cout<<"\tParameterized constructor\n";
    }
    void display()
    {
        cout<<"Name:"<<name<<"\nAge:"<<age<<endl;
    }
};
int main()
{
    student s1;
    student s2("Gireesh",18);
    s1.display();
    s2.display();
    return 0;
}