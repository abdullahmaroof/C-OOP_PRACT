#include<iostream>
using namespace std;

class student{
	private:
		int rollno;
		string name;
		string section;
		string dep;
	public:
		student(){
			cout<<endl;
			getdata();
		}
		~student()
		{}
		void getdata()
		{
			cout<<"Enter student roll no: ";
			cin>>rollno;
			cout<<"Enter student name: ";
			cin>>name;
			cout<<"Enter student section: ";
			cin>>section;
			cout<<"Enter student department: ";
			cin>>dep;
		}
		void showdata()
		{
			cout<<"* Student roll no: "<<rollno<<endl;
			cout<<"* Student name: "<<name<<endl;
			cout<<"* Student section: "<<section<<endl;
			cout<<"* Student department: "<<dep<<endl;
			cout<<"------------------------------"<<endl<<endl;
		}
};
int main()
{
	student std1, std2, std3;
	cout<<"\n\nStudent-1 Data"<<endl;
	std1.showdata();
	cout<<"Student-2 Data"<<endl;
	std2.showdata();
	cout<<"Student-3 Data"<<endl;
	std3.showdata();
	return 0;
}
