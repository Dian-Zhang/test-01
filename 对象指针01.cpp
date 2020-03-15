#include<iostream>
#include<string>
using namespace std;
class Student
{
private:
    string name;
    int score;
public:
    Student( string name, int score) :name(name), score(score)
    {}
    void print()
    {
        cout << name << " " << score << endl;
    }
};

int main()
{
    //Student p[3]{ { "AAA",80 },{ "BBB",90 },{ "CCC",100 } }; //把这句改写成用对象指针new 3个对象
    Student* p = new Student[3]{ { "AAA",80 },{ "BBB",90 },{ "CCC",100 } };
    for (int i = 0; i < 3; i++)
    {
        //p[i].print(); //这句也改成用指针访问
        //p->print();
        //p++;
        (p + i)->print();
    }
    //system("pause");
    return 0;
}