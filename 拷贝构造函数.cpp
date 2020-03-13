#include<iostream>
#include<string>
using namespace std;

class Student
{
private:
	string name;
	double score;
public:
	Student(string n, double s) :name(n), score(s)
	{
		cout << name << "'s constructor" << endl;
	}
    Student(const Student& stu)
    {
        name = "CTom";
        score = stu.score;
        cout << name << "'s copy constructor" << endl;
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
    string n1, n2;
    double a1, a2;
    cin >> n1 >> a1 >> n2 >> a2;
    Student s[2] = { {n1,a1},{n2,a2} };
    Student t = s[0];
    //Student A=B;
    //Student A(B);
    //Student A;
    //A=B;
    s[0].display();
    s[1].display();
    t.display();
    //system("pause");
    return 0;
}