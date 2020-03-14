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
        //������
    }
    double getDistance()
    {
        return sqrt(x * x + y * y);
    }
    double getDistance(Point& p)
    {
        //�Բۣ���һ�д���������ô�뵽�ģ�
        //��������Ű�
        return sqrt((x - p.x) * (x - p.x) + (y - p.y) * (y - p.y));
    }
};
int main()
{
    double x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    Point p1(x1, y1), p2(x2, y2);
    cout << p1.getDistance() << endl; //���p1��ԭ��ľ���
    cout << p2.getDistance() << endl; //���p2��ԭ��ľ���
    cout << p1.getDistance(p2) << endl; //���p1��p2�ľ���
    //system("pause");
    return 0;
}