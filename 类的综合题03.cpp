#include<iostream>
#include<string>
using namespace std;
class Cat
{
private:
    string name;
public:
    Cat(const string _name) :name(_name)
    {

    }
    void playwith(Cat& c)
    {
        cout << name << " is playing with " <<c.name<< endl;
    }
    void playwith()
    {
        cout << name << " is playing alone" << endl;
    }
};

int main()
{
    Cat c1("Tom"), c2("Kitty"), c3("Garfield");
    c1.playwith(c2);
    c2.playwith(c1);
    c3.playwith();
    //system("pause");
    return 0;
}