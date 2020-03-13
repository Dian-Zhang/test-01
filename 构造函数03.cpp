#include<iostream>
using namespace std;
class Student
{
private:
	string name;
	double score;
public:
	Student()
	{

	}
	Student(string _name, double _score)
	{
		name = _name;
		score = _score;
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
	string n;
	double a;
	cin >> n >> a;
	Student s(n, a);
	cout << s.getName() << endl;
	cout << s.getScore() << endl;

	//system("pause");
	return 0;
}