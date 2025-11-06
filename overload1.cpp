#include <iostream>
using namespace std;
class Calculator
{
public:
int add(int a, int b){
    return a+b;
}
float add(float a,float b){
    return a+b;
}
string add(string a, string b){
    return a+b;
}
};
int main(){
    Calculator c;
    cout<<"Sum of Integers:"<<c.add(5,10)<<endl;
    cout<<"Sum of Float:"<<c.add(5.5f,4.5f)<<endl;
    cout<<"Concatenation of Strings:"<<c.add("Hello\t","World")<<endl;
    return 0;
}