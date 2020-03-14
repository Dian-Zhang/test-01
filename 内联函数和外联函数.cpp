#include<iostream>
#include<string>
using namespace std;
class Student
{
private:
    string name;
    double score;
public:
    Student(string name, double score) :name(name), score(score)
    {
        cout << name << "'s constructor" << endl;
    }
    ~Student()
    {
        cout << name << "'s destructor" << endl;
    }
    void display()
    {
        cout << name << " " << score << endl;
    }
};
int main()
{
    Student s("Tom", 90);
    s.display();
    return 0;
}