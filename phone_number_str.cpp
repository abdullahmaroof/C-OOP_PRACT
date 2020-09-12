#include<iostream>
using namespace std;

struct ph_no{
	int code;
	int exchange;
	int number;
};

int main()
{
	ph_no my_num, your_num;
	my_num.code = +92;
	my_num.exchange = 312;
	my_num.number = 2002221;
	cout<<"\n---------------Phone Number----------------------"<<endl;
	cout<<"\n* Enter your phone number code: ";
	cin>>your_num.code;
	cout<<"* Enter your phone number exchange: ";
	cin>>your_num.exchange;
	cout<<"* Enter your phone number exchange: ";
	cin>>your_num.number;
	cout<<"\n-------------------------------------------\n\n";
	cout<<"* My number is ("<<my_num.code<<") "<<my_num.exchange<<"-"<<my_num.number<<endl;
	cout<<"* Your number is ("<<your_num.code<<") "<<your_num.exchange<<"-"<<your_num.number<<endl;
	return 0;
}
