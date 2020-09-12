#include<iostream>
using namespace std;

struct Distance{
	int feet;
	int inche;
};

struct volume{
	Distance length;
	Distance width;
	Distance height;
};

int main()
{
	float l, w, h;
	volume room = {{2,10},{4,15},{7,20}};
	l = room.length.feet + room.length.inche/12.0;
	w = room.width.feet + room.width.inche/12.0;
	h = room.height.feet + room.height.inche/12.0;
	cout<<"Volume of room: "<<l*w*h<<" cubic feet";
	return 0;
}
