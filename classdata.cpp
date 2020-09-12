#include<iostream>
using namespace std;

class student{
	private:
		string roll_no;
		string name;
		string phone_no;
	public:
		void saveddata(string stdroll_no, string stdname, string stdphone_no)
		{
			roll_no = stdroll_no;
			name = stdname;
			phone_no = stdphone_no;
		}
		void getdata()
		{
			cout<<"Enter student roll no: ";
			cin>>roll_no;
			cout<<"Enter student name: ";
			cin>>name;
			cout<<"Enter Phone no: ";	
			cin>>phone_no;
		}
		void showdata()
		{
			cout<<"Student roll no: "<<roll_no<<endl;
			cout<<"Student name: "<<name<<endl;
			cout<<"Student phone: "<<phone_no<<endl;
			cout<<"--------------------------------"<<endl;
		}
};

int main()
{
	student std1, std2;
	std1.saveddata("BSEM-F19-001","Samiullah Butt","+92312-0987321");
	cout<<"Enter student data"<<endl;
	std2.getdata();
	cout<<"\n\nStudent Record"<<endl;
	cout<<"\nStudent-1:-"<<endl;
	std1.showdata();
	cout<<"\nStudent-2:-"<<endl;
	std2.showdata();
	return 0;
}
