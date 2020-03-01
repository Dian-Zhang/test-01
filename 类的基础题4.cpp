#include<iostream>
using namespace std;
class Rectangle
{
private:
	double width;
	double height;
public:
	void setWidth(double _width)
	{
		width = _width;
	}
	void setHeight(double _height)
	{
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
	Rectangle r;
	double w, h;
	cin >> w >> h;
	r.setWidth(w);
	r.setHeight(h);
	cout << r.getCir() << endl;
	cout << r.getArea() << endl;
	return 0;
}