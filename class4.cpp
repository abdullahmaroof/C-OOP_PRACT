#include<iostream>
using namespace std;

class Sallery{
	public:
		void printsal(int sal);
};

	void Sallery :: printsal(int sal)
	{
		cout<<"Sallery: "<<sal;
	}

int main()
{
	Sallery emp1;
	emp1.printsal(20000);
	return 0;
}
