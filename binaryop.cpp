#include <iostream>
using namespace std;
class complex
{
    float real, imag; 
public:
    void getdata()
    {
        cout << "Enter real and imaginary part: ";
        cin >> real >> imag;
    }
    complex operator+(complex c)
    {
        complex temp; 
        temp.real = real + c.real; 
        temp.imag = imag + c.imag;
        return temp;
    }
    void display()
    {
        cout << real << " + " << imag << "i" << endl;
    }
};
int main()
{
    complex c1, c2, c3;
    c1.getdata();
    c2.getdata();
    c3 = c1 + c2;
    c3.display();
    return 0;
}
