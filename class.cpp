#include<iostream>
using namespace std;

class stddata {
	private:
		string name;
		int roll_no;
		string fname;
		string address;
		string m_no;
		int age;
		string edu;
		string email;
	public:
		void getstddata(string sname, int sroll_no, string sfname, string saddress, string sm_no, int sage, string sedu, string semail)
		{
			name = sname;
			roll_no = sroll_no;
			fname = sfname;
			address = saddress;
			m_no = sm_no;
			age = sage;
			edu = sedu;
			email = semail;
		}	
		void showstddata()
		{
			cout<<"\tName: "<<name<<endl;
			cout<<"\tFather Name: "<<fname<<endl;
			cout<<"\tRoll No: "<<roll_no<<endl;
			cout<<"\tMobile No: "<<m_no<<endl;
			cout<<"\tEmail: "<<email<<endl;
			cout<<"\tAge: "<<age<<endl;
			cout<<"\tAddress: "<<address<<endl;
			cout<<"\tEducation: "<<edu<<endl;
			cout<<"\n-----------------------------------------\n\n";
		}
};

int main()
{
	stddata std1, std2;
	std1.getstddata("Abdullah Maroof",12,"Maroof Hussain","Calvary Ground, Lahore","+92312-2002221",19,"Intermediate","abdullahmaroof597@gmail.com");
	std2.getstddata("Shifa Rafique",15,"Rafique","Gill Colony, Walton, Lahore","+92207-2378163",20,"Intermediate","shifarafique12@gmail.com");
	cout<<"\n\t----Students Bio data----\n"<<endl;
	std1.showstddata();
	std2.showstddata();
	
	return 0;
}
