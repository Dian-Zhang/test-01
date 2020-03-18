#include<iostream>
#include<cmath>
using namespace std;

class Point
{
private:
    double x, y;
public:
    Point(double x, double y) :x(x), y(y){}
    double getDistance()
    {
        return sqrt(x * x + y * y);
    }
    double getDistance(Point& p)
    {
        //卧槽，这一行代码我是怎么想到的？
        //我真是天才啊
        return sqrt(pow(x - p.x,2)+ pow(y - p.y,2));
    }
};
int main()
{
    double x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    Point p1(x1, y1), p2(x2, y2);
    cout << p1.getDistance() << endl; //输出p1到原点的距离
    cout << p2.getDistance() << endl; //输出p2到原点的距离
    cout << p1.getDistance(p2) << endl; //输出p1到p2的距离
    //system("pause");
    return 0;
}