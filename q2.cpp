#include<iostream>
using namespace std;

struct point{
	int x_cor;
	int y_cor;
};

int main()
{
	point p1, p2, p3;
	cout<<"\n\t\tPoint to model a point"<<endl;
	cout<<"\n----------------------------------"<<endl;
	cout<<"\n* Enter p1 x-cordinate: ";
	cin>>p1.x_cor;
	cout<<"* Enter p1 y-cordinate: ";
	cin>>p1.y_cor;
	cout<<"\n----------------------------------"<<endl;
	cout<<"\n* Enter p2 x-cordinate: ";
	cin>>p2.x_cor;
	cout<<"* Enter p2 y-cordinate: ";
	cin>>p2.y_cor;
	cout<<"\n----------------------------------"<<endl;
	cout<<"\n* Entered cordinates of p1: "<<p1.x_cor<<" "<<p1.y_cor<<endl;
	cout<<"* Entered cordinates of p2: "<<p2.x_cor<<" "<<p2.y_cor<<endl;
	p3.x_cor = p1.x_cor + p2.x_cor;
	p3.y_cor = p1.y_cor + p2.y_cor;
	cout<<"* Coordinates of p1+p2 are: "<<p3.x_cor<<","<<p3.y_cor;
	cout<<"\n----------------------------------"<<endl;
	return 0;
}
