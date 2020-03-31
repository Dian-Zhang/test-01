#include<iostream>
#include<string>
using namespace std;
class Cat
{
private:
    string name;
public:
    Cat(string name) :name(name) {}
    string getType(){ return "cat"; }
    string getName(){ return name; }
};
class Mouse
{
private:
    string name;
public:
    Mouse(string name) :name(name) {}
    string getType(){ return "mouse"; }
    string getName(){ return name; }
};
//Person¿‡ƒ£∞Â
template<typename T>
class Person
{
private:
    string name;
    T* pet;
public:
    Person(string name,T*pet):name(name),pet(pet){}
    void display()
    {
        cout << name << " has a pet " << pet->getType() << " named "
            << pet->getName() << "." << endl;
    }
};
int main()
{
    Cat c("Tom");
    Mouse m("Jerry");
    Person<Cat> p1("AAA", &c);
    Person<Mouse> p2("BBB", &m);
    p1.display();//AAA has a pet cat named Tom.
    p2.display();//BBB has a pet mouse named Jerry.
    return 0;
}