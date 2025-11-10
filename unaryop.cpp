#include<iostream>
using namespace std;
class temperature
{
    float celsius;
    public:
    void getdata()
    {
        cout<<"Enter Temperature in Celsius:";
        cin>>celsius;
    }
    void operator-()
    {
        float fahrenhiet;
        fahrenhiet=(celsius*9/5)+32;
        cout<<"Temperature in Fahrenhiet:"<<fahrenhiet;
    }
};
int main()
{
    temperature t;
    t.getdata();
    -t;
    return 0;
}