#include <iostream>
using namespace std;
class Bank{
	public:
		string name;
		int accountno;
		float balance;
		//deposit money:
		void deposit(float amount)
		{
			balance +=amount;
			
		}
		//withdraw
		void withdraw(float amount)
		{
			if (amount<=balance)
				balance -=amount;
			else 
				cout<<"Insufficient balance:"<<endl;
			}
		//display
			void display()
			{
				cout<<"Name:\t"<<name<<endl;
				cout<<"Account No:\t"<<accountno<<endl;
				cout<<"Balance:\t"<<balance<<endl;
			}
		
		
};
int main()
{
Bank b1;
b1.name="Nirmal";
b1.accountno=101;
b1.balance=5000;
b1.deposit(1000);
b1.withdraw(2000);
b1.display();
return 0;
}
