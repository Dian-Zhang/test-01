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
        cout << name << "'s destructor"<<endl;
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
    Student s1(n1, a1), s2(n2, a2);
    cout << s1.getName() << " " << s1.getScore() << endl;
    cout << s2.getName() << " " << s2.getScore() << endl;
    //system("pause");
    return 0;
}
