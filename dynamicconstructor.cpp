#include<iostream>
using namespace std;
class patient
{
    char*name;
    char*disease;
    int age;
    public:
    patient(const char*n,int a,const char*d)
    {
        name=new char[strlen(n)+1];
        strcpy(name,n);
        age=a;
        disease=new char[strlen(d)+1];
        strcpy(disease,d);
    }
    void display()
    {
        cout<<"Name:"<<name
    }
}