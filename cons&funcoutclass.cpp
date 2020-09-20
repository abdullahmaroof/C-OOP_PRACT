#include<iostream>
using namespace std;

class studentData{
	private:
		string name;
		string fatherName;
		string email;
		int age;
	public:
		studentData(string stdname, string stdfname, string stdemail, int stdage);
		void printData();
};
	studentData :: studentData(string stdname, string stdfname, string stdemail, int stdage)
	{
		name = stdname;
		fatherName = stdfname;
		email = stdemail;
		age = stdage;
	}
	void studentData :: printData()
	{
		cout<<"\n----------student data-----------"<<endl<<endl;
		cout<<"* Name: "<<name<<endl;
		cout<<"* Father Name: "<<fatherName<<endl;
		cout<<"* Email: "<<email<<endl;
		cout<<"* Age: "<<age<<endl;
	}

int main()
{
	studentData std1("Umar Maroof","Maroof Hussain","umarmaroof12@gmail.com",32);
	std1.printData();
	return 0;
}
