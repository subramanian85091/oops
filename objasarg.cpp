#include <iostream>
using namespace std;
class Complex{
    int real, imag;
    public:
        void setdata(int r,int i)
        {
            real=r;
            imag=i;
        }
        void display()
        {
            cout<<real<<"+"<<imag<<"i";
        }
        Complex add(Complex c)
        {
            Complex x;
            x.real=real+c.real;
            x.imag=imag+c.imag;
            return x;
        }
};
int main()
{
    Complex c1,c2,c3;
    c1.setdata(3,4);
    c2.setdata(5,6);
    cout<<"First Complex Number:"<<endl;
    c1.display();
    cout<<"\nSecond Complex Number:"<<endl;
    c2.display();
    c3=c1.add(c2);
    cout<<"\nSum of Complex Numbers:"<<endl;
    c3.display();
    return 0;
}