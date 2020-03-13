#include<iostream>
#include<string>
using namespace std;
class Student
{
private:
    string name;
    double score;
public:
    Student(string _name, double _score)
    {
        name = _name;
        score = _score;
        cout << name << "'s constructor"<<endl;
    }
    ~Student()
    {
        cout << name << "'s destructor" << endl;
    }
    string getName()
    {
        return name;
    }
    double getScore()
    {
        return score;
    }
};
int main()
{
    string n1, n2;
    double a1, a2;
    cin >> n1 >> a1 >> n2 >> a2;
    //这行改为定义一个学生类的数组s，长度为2
    Student s[2] = { {n1,a1} , {n2,a2} };
    cout << s[0].getName() << " " << s[0].getScore() << endl;
    cout << s[1].getName() << " " << s[1].getScore() << endl;
    //system("pause");
    return 0;
}