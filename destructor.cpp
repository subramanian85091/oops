#include<iostream>
using namespace std;
class showcase
{
    public:           
    void display()
    {
        cout<<"Object is working\n";
    }

 ~showcase()
    {
        cout<<"Destructor called object destroyed\n";
    }
};
int main()
{
    cout<<"Creating object obj1\n";
    showcase obj1;
    obj1.display();
    cout<<"Creating object obj2\n";
    showcase obj2;
    cout<<"End of program\nobject will be destroyed automatically"<<endl;
    return 0;
}