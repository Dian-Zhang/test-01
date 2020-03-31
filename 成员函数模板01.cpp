#include<iostream>
#include<string>
using namespace std;
class Mouse;
class Cat
{
public:
    string name;
    Cat(string);
    template<typename T>void playwith(T&);
};
class Mouse
{
public:
    string name;
    Mouse(string);
    template<typename T> void playwith(T&);
};
Cat::Cat(string name) :name(name) {}
template<typename T>
void Cat::playwith(T& mate)
{
    cout << name << " is playing with " << mate.name << "." << endl;
}
//void Cat::playwith(Cat& c)
//{
//    cout << name << " is playing with " << c.name << "." << endl;
//}
//void Cat::playwith(Mouse& m)
//{
//    cout << name << " is playing with " << m.name << "." << endl;
//}
Mouse::Mouse(string name) :name(name) {}
template<typename T>
void Mouse::playwith(T& mate)
{
    cout << name << " is playing with " << mate.name << "." << endl;
}
//void Mouse::playwith(Cat& c)
//{
//    cout << name << " is playing with " << c.name << "." << endl;
//}
//void Mouse::playwith(Mouse& m)
//{
//    cout << name << " is playing with " << m.name << "." << endl;
//}
int main()
{
    Cat c1("Tom"), c2("Garfield");
    Mouse m1("Jerry"), m2("Mickey");
    c1.playwith(c2);//Tom is playing with Garfield.
    c2.playwith(m1);//Garfield is playing with Jerry.
    m1.playwith(m2);//Jerry is playing with Mickey.
    m2.playwith(c1);//Mickey is playing with Tom.
    return 0;
}