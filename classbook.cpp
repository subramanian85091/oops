#include<iostream>
using namespace std;
class book{
	public:
		string title;
		string author;
		float price;
		void display()
		{
			cout<<"Title:"<<title<<",Author:"<<author<<",Price:"<<price<<"rs"<<endl;
			
		}
};
int main()
{
	book b1,b2;
	b1.title="Java Core";
	b1.author="Bjarne Stroustrup";
	b1.price=1000;
	b2.title="Data structures and algorithm";
	b2.author="Mark Allen Weiss";
	b2.price=900;
	b1.display();
	b2.display();
	return 0;
}
