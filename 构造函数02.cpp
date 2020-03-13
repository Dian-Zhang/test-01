#include<iostream>
using namespace std;
class Rectangle
{
private:
	double width;
	double height;

public:
	Rectangle()
	{

	}
	Rectangle(double _width, double _height)
	{
		width = _width;
		height = _height;
	}
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
	double w1, h1, w2, h2;
	cin >> w1 >> h1 >> w2 >> h2;
	Rectangle r1(w1, h1);
	Rectangle r2;
	r2.setWidth(w2);
	r2.setHeight(h2);
	cout << r1.getCir() << endl;
	cout << r1.getArea() << endl;
	cout << r2.getCir() << endl;
	cout << r2.getArea() << endl;
	//system("pause");
	return 0;
}


