#include<iostream>
using namespace std;

struct point{
	int p1[2][2];
	int p2[2][2];
	int p3[2][2]; 
};

int main()
{
	int x_sum, y_sum;
	point model_p;
	model_p.p1[0][0] = 2;
	model_p.p1[0][1] = 4;
	cout<<"--------point to model a point-------";
	cout<<"\n* Enter x-cordinate of second point: ";
	cin>>model_p.p2[0][0];
	cout<<"* Enter y-cordinate of second point: ";
	cin>>model_p.p2[0][1];
	cout<<"\n\n-------------------------------\n";
	cout<<"\n* Enter x-cordinate of third point: ";
	cin>>model_p.p3[0][0];
	cout<<"* Enter y-cordinate of third point: ";
	cin>>model_p.p3[0][1];
	cout<<"\n\n-------------------------------\n";
	cout<<"\n------Sum of three points cordinates--------";
	x_sum = model_p.p1[0][0] + model_p.p2[0][0] + model_p.p3[0][0];
	y_sum = model_p.p1[0][1] + model_p.p2[0][1] + model_p.p3[0][1];
	cout<<"\n\n* p1+p2+p3= "<<x_sum<<" , "<<y_sum;
	cout<<"\n\n-------------------------------\n";
	return 0;
}
