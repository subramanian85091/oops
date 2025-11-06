#include <iostream>
using namespace std;

class Student
{
    int rollno;
    string name;
    static int count;  

public:
    void setdata(int r, string n)  
    {
        rollno = r;
        name = n;
        count++;
    }
    
    void display()
    {
        cout << "Roll No: " << rollno << ", Name: " << name << endl;
    }
    
    static void showcount()
    {
        cout << "Total Students: " << count << endl;
    }
};


int Student::count = 0;

int main()
{
    Student s[3];
    s[0].setdata(101, "Akash");
    s[1].setdata(102, "Akshay");
    s[2].setdata(103, "Bala");

    cout << "\n----STUDENT DETAILS----\n";
    for (int i = 0; i < 3; i++)
    {
        s[i].display();
    }

    Student::showcount();
    return 0;
}
