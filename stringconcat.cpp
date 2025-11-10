#include <iostream>
#include <cstring>
using namespace std;
class stringcon
{
    char str[100];
public:
    void getdata()
    {
        cout << "Enter string: ";
        cin >> str; 
    }
    stringcon operator+(const stringcon &s)
    {
        stringcon temp;
        strcpy(temp.str, str);
        strcat(temp.str, s.str);
        return temp;
    }
    void display() const
    {
        cout << "Resultant string: " << str << endl;
    }
};
int main()
{
    stringcon s1, s2, s3;
    s1.getdata();
    s2.getdata();
    s3 = s1 + s2;
    s3.display();
    return 0;
}


