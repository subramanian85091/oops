#include <iostream>
using namespace std;
class laptop{
	public:
		string brand;
		string processor;
		int ram;
		void display()
		{
		
			cout<<"Brand:"<<brand<<",Processor:"<<processor<<",Ram:"<<ram<<"GB"<<endl;
		}
};
int main()
{
	laptop a1,a2;
	a1.brand="Asus TUF";
	a1.processor="Intel i7 13700h";
	a1.ram=16;
	a2.brand="Lenovo LOQ";
	a2.processor="AMD Ryzen 7 5800h";
	a2.ram=8;
	a1.display();
	a2.display();
	return 0;		
}
