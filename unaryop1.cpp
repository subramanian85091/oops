#include <iostream>
using namespace std;
class counter
{
    int count;
    public:
    counter (int c=0)
    {
        count = c;
    }
//prefix increment(++obj)
counter operator++()
{
    ++count;
    return *this;
}
//postfix increment(obj++)
counter operator++(int)
{
counter temp= *this;
count++;
return temp;
}
void display()
{
cout<<"Count:"<<count<<endl;
}
};
int main()
{
    counter c1(5);
    ++c1;
    c1.display();
    c1++;
    c1.display();
    return 0;

}