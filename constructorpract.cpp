#include<iostream>
using namespace std;

class student{
	private:
		int rollno;
		string name;
		string section;
		string dep;
	public:
		student() : rollno(0)
		{}
		void getdata(string stdname, string stdsection, string stddep)
		{
			rollno++;
			name = stdname;
			section = stdsection;
			dep = stddep;
		}
		void showdata()
		{
			cout<<"* Student roll no: "<<rollno<<endl;
			cout<<"* Student name: "<<name<<endl;
			cout<<"* Student section: "<<section<<endl;
			cout<<"* Student department: "<<dep<<endl;
			cout<<"------------------------------"<<endl<<endl;
		}
		~student()
		{}
};
int main()
{
	student std1, std2, std3;
	std1.getdata("Abdullah Maroof","2A","BS Software Engineering");
	std2.getdata("Umar Maroof","2A","BS Software Engineering");
	std2.getdata("Umar Maroof","2A","BS Software Engineering");
	std3.getdata("Aneesa Ashraf","2A","BS Software Engineering");
	std3.getdata("Aneesa Ashraf","2A","BS Software Engineering");
	std3.getdata("Aneesa Ashraf","2A","BS Software Engineering");
	cout<<"-----------------Students Data------------------"<<endl;
	std1.showdata();
	std2.showdata();
	std3.showdata();
	return 0;
}
