#include<iostream>
using namespace std;

struct biodata {
	string name;
	string fname;
	string dob;
	int age;
	string edu;
};
int main()
{
	biodata data;
	data.name = "Abdullah Maroof";
	data.fname = "Maroof Hussain"; 
	data.dob = "1-NOV-2000";
	data.age = 19;
	data.edu = "Intermedaite";
	cout<<"Name: "<<data.name<<endl;
	cout<<"Father Name:"<<data.fname<<endl;
	return 0;
}



