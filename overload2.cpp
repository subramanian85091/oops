#include <iostream>
using namespace std;
class Area
{
public:
float findArea(float radius){
    return 3.14f*radius*radius;
}
int findArea(int length,int breadth){
    return length*breadth;
}
int findArea(int side){
    return side*side;
}
};
int main(){
    Area a;
    cout<<"Area of circle (radius=5):"<<a.findArea(5.0f)<<endl;
    cout<<"Area of Rectangle (4x6):"<<a.findArea(4,6)<<endl;
    cout<<"Area of square (Side=7):"<<a.findArea(7)<<endl;
    return 0;
}