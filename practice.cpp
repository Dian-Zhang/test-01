#include <iostream>
using namespace std;
class Rectangle
{
public:
	int width;
	int high;
public:
	int getCir()
	{
		return 2 * width + 2 * high;
	}
	int getArea()
	{
		return width * high;
	}
};
int main()
{
	int n;
	cin >> n;
	Rectangle r;
	int a[10][2];
	for (int i = 0; i < n; i++)
	{
		cin >> r.width >> r.high;
		//cout << r.getCir() << ' ' << r.getArea() << endl;
		a[i][0] = r.getCir();
		a[i][1] = r.getArea();
	}
	for (int i = 0; i < n; i++)
	{
		cout << a[i][0] << ' ' << a[i][1] << endl;
	}
	//system("pause");

	return 0;
}