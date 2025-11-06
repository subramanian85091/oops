#include<iostream>
using namespace std;
class number
{
    int value;
    public:
    number (int v): value (v) { }
    number() : value (0) { }

    //declaration of friend function
    friend number operator+(const number &n);
    void display()
    {
        cout<<"Value:"<<value<<endl;
    }
};
 number operator+(const number &n)
    {
        return number(+n.value);
    }
int main(){
    number n1(10),n2;
    n2=+n1;
    n2.display();
    return 0;
}