#include<iostream>
#include<string>
using namespace std;
class Student
{
private:
	string name;
	int score;
public:
	void setName(string _name)
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
	Student stu;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> stu.setName("") >> stu.setScore();
	}








	return 0;
}