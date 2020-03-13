#include<iostream>
#include<string>
using namespace std;

class Cat
{
private:
    string name;
    int age;
public:
    Cat(string n, int a):name(n),age(a)
    {
        //name = n;
        //age = a;
        cout << name << "'s constructor" << endl;
    }
    void display()
    {
        cout << name << " " << age << endl;
    }
};
int main()
{
    Cat c("Tom", 10);
    c.display();
    //system("pause");
    return 0;
}