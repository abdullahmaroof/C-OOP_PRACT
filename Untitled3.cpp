#include<iostream>
using namespace std;

struct employ{
	int emp_id;
	float comp_sallery;
};

int main()
{
	employ member[3];
	for(int i=0;i<3;i++)
	{
		cout<<"id &  wage = ";
		cin>>member.emp_id[i]>>member.comp_sallery[i];
	}
	for(int i=0;i<3;i++)
	{
		cout<<"id &  wage = ";
		cout<<member.emp_id[i]<<member.comp_sallery[i];
	}
	return 0;
}
