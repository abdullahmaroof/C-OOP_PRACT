#include<iostream>
using namespace std;

class MyData{
	public:
		void MyInfo();
};
	void MyData :: MyInfo()
	{
		cout<<"* Name: Abdullah Marof"<<endl;
		cout<<"* Age: 19"<<endl;
		cout<<"* Date of Birth: 1-NOV-2000";
	}
int main()
{
	MyData me;
	me.MyInfo();
	return 0;
}
