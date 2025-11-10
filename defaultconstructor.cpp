#include<iostream>
using namespace std;
class student
{
    int rollno;
    string name;
    public:
    student()
    {
        rollno=01;
        name="Gireesh";
    }
    display()
    {
        cout<<"Name:"<<name<<"\n Roll No:"<<rollno;
    }
};
int main()
{
    student s1;
    s1.display();
    return 0;
}
