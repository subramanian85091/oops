#include<iostream>
using namespace std;
class student
{
    private:
    string name;
    int marks;
    int rollno;
    public:
    void showcase(student &s)
    {
        cout<<"Enter Student Name:";
        cin>>name;
        cout<<"Enter Student Roll No:";
        cin>>rollno;
        cout<<"Enter Student Marks:";
        cin>>marks;
        cout<<"Name:"<<name<<"\nRoll No:"<<rollno<<"\nMarks:"<<marks;
    }
};
int main()
{
    student s;
    s.showcase(s);
    return 0;
}