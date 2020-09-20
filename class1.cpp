#include<iostream>
using namespace std;
class Personalinfo{
	public:
		string name;
		int age;
		string DOB;
};

int main()
{
	Personalinfo p1, p2;
	p1.name = "Abdullah Maroof";
	p1.age = 19;
	p1.DOB = "1-NOV-2000";
	p2.name = "Shifa Rafique";
	p2.age = 20;
	p2.DOB = "11-MAY-2000";
	cout<<"Peronal Info of person 1"<<endl;
	cout<<"* Name: "<<p1.name<<endl;
	cout<<"* Age: "<<p1.age<<endl;
	cout<<"* Date of Birth: "<<p1.DOB<<endl;
	cout<<"-----------------------------------------"<<endl;
	cout<<"Peronal Info of person 2"<<endl;
	cout<<"* Name: "<<p2.name<<endl;
	cout<<"* Age: "<<p2.age<<endl;
	cout<<"* Date of Birth: "<<p2.DOB<<endl;
	cout<<"-----------------------------------------"<<endl;
	return 0;
}
