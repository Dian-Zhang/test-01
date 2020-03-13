#include<iostream>
using namespace std;
class Rectangle
{
private:
	double width;
	double height;

public:
	Rectangle(double _width, double _height)
	{
		width = _width;
		height = _height;
	}
	double getCir()
	{
		return 2 * (width + height);
	}
	double getArea()
	{
		return width * height;
	}
};
int main()
{
	double w, h;
	cin >> w >> h;
	Rectangle r(w, h);
	cout << r.getCir() << endl;
	cout << r.getArea() << endl;
	return 0;
}