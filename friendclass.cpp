#include<iostream>
using namespace std;
class B; 
class A
{
    private:
    int x;
    public:
    A(int value): x(value) {}  
    friend void add(A, B); 
};
class B
{
    private:
    int y;
    public:
    B(int value): y(value) {}  
    friend void add(A, B);  
};
void add(A obj1, B obj2) 
{
    cout << "Sum = " << obj1.x + obj2.y << endl;  
}
int main() 
{
    int g,h;
    cout<<"Enter 2 numbers :";
    cin>>g>>h;
    A objA(g); 
    B objB(h); 
    add(objA, objB); 
    return 0;
}
