#include<iostream>
#include<string>
using namespace std;
class Teletubbies
{
private:
    string name;
public:
    Teletubbies(string _name) :name(_name)
    {
        cout << "Here comes " << name << endl;
    }
    void playwith(Teletubbies& t)
    {
        cout << name << " is playing with " << t.name << endl;
    }
    ~Teletubbies()
    {
        cout << name << " says good night"<<endl;
    }
};
int main()
{
    Teletubbies t1("Tinky Winky");
    Teletubbies t2("Dipsy");
    Teletubbies t3("Laa-Laa");
    Teletubbies t4("Po");
    t1.playwith(t4);
    t2.playwith(t3);
    //system("pause");
    return 0;
}