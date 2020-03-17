#include<iostream>
#include<string>
#include<cmath>
using namespace std;
class Planet
{
private:
    string name;
    int x;
public:
    Planet(string name, int x);
    string getName() { return name; }
    int getX() { return x; }

};
void showDistance(Planet &p1, Planet& p2)
{
    cout << "Distance between " <<p1.getName() << " and "
        << p2.getName() << " is "
        << abs(p1.getX() - p2.getX()) << " km." << endl;
}
int main()
{
    Planet p[] = { {"Mercury", 57910000},
     {"Venus", 108200000},
     {"Earth", 149600000},
     {"Mars", 227940000},
     {"Jupiter", 778330000},
     {"Saturn", 1429400000}
    };
    showDistance(p[0], p[2]);
    showDistance(p[2], p[3]);
    //system("pause");
    return 0;
}
Planet::Planet(string _name, int _x) :name(_name), x(_x)
{
    cout << name << "'s constructor. Distance between "
        << name << " and Sun is " << x << " km." << endl;
}
