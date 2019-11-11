#include <iostream>
#include <cmath>
using namespace std;
struct Point
{
	double x, y;
	bool in;
};

int main()
{
	int n;
	cin >> n;
	Point point[100];
	bool circle, triangle;
	double x1 = -9, y1 = 0,r;
	for (int i = 0;i < n;++i)
	{
		cin >> point[i].x;
		cin >> point[i].y;

	}
	for (int i = 0;i < n;++i)
	{
		r = sqrt((point[i].x - x1) * (point[i].x - x1) + (point[i].y - y1) * (point[i].y - y1));
		circle = r <= 3 && r >= 1 && point[i].y >= 0;
		triangle = point[i].y <= -point[i].x + 6 && point[i].y >= 2 && point[i].x >= 2;
		if (circle || triangle) point[i].in = 1;
		else point[i].in = 0;
	}
	for (int i = 0;i < n;++i)
	{
		if(point[i].in) cout << "<" << point[i].x << ";" << point[i].y << ">: In"<<endl;
		else cout<< "<" << point[i].x << ";" << point[i].y << ">: Out"<<endl;

	}


	return 0;
}
