#include<iostream>
#include<string>
using namespace std;
constexpr auto pi = 3.14;//×¢Òâ´Ë´¦

class Circle
{
private:
    double r;
public:
    Circle(double _r) :r(_r) {}
    Circle() { r = 0; }
    Circle(const Circle& c) { r = c.r; }
    void display()
    {
        cout << r << " "
            << 2 * pi * r << " "
            << pi * r * r << endl;
    }
};
int main()
{
    double r;
    cin >> r;
    Circle c1(r), c2(c1), c3;
    c1.display();
    c2.display();
    c3.display();
    //system("pause");
    return 0;
}