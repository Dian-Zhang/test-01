#include<iostream>
#include<string>
using namespace std;
class Student
{
public:
    string name;
    int score;
    //①这里应当是构造函数
    Student(string name, int score) :name(name), score(score) {
        cout << name << "'s score is " << score << "."<<endl;
    }
};
//②这里应当是show函数的定义
void show(Student &stu1,Student &stu2)
{
    if (stu1.score > stu2.score) {
        cout << stu1.name << "'s score is " << stu1.score - stu2.score
            << " higher than " << stu2.name << "'s."<<endl;
    }
    else {
        cout << stu1.name << "'s score is " << stu2.score - stu1.score
            << " lower than " << stu2.name << "'s."<<endl;
    }
}
int main()
{
    Student s[] = { Student("Tom", 80),
     Student("Jerry", 95),
     Student("Garfield", 85)
    };
    show(s[0], s[1]);
    show(s[1], s[2]);
    return 0;
}