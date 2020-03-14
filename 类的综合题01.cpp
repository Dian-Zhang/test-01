#include<iostream>
#include<math.h>
using namespace std;

class Point
{
private:
    double x, y;
public:
    Point(double _x, double _y) :x(_x), y(_y)
    {
        //无内容
    }
    double getDistance()
    {
        return sqrt(x * x + y * y);
    }
    double getDistance(Point& p)
    {
        //卧槽，这一行代码我是怎么想到的？
        //我真是天才啊
        return sqrt((x - p.x) * (x - p.x) + (y - p.y) * (y - p.y));
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