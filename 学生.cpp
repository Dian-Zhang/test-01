#include<iostream>
#include<string>
using namespace std;
class Student
{
private:
	string name;//attributes
	int score;
public:
	void setName(string _name)//methods
	{
		name=_name;
	}
	string getName()
	{
		return name;
	}
	void setScore(int _score)
	{
		score = _score;
	}
	int getScore()
	{
		return score;
	}
};
int main()
{
	int n;
	cin >> n;
	for
	Student stu01;
	int score;
	string name;
	cin >> name >> score;
	stu01.setName(name);
	stu01.setScore(score);
	stu01.getName();
	stu01.getScore();






	return 0;
}