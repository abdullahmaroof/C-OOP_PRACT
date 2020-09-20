#include<iostream>
using namespace std;

class MyData{
	public:
		void MyInfo()
		{
			cout<<"Name: Abdullah Marof"<<endl;
			cout<<"Age: 19";
		}
};
int main()
{
	MyData me;
	me.MyInfo();
	return 0;
}
