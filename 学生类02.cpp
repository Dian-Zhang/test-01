#include<iostream>
#include<string>
using namespace std;
class Student
{
private:
	string name;
	int score[3];
public:
	void setName(string name)
	{
		this->name = name;
	}
	string getName() { return name; }
	void setScore(int score[])
	{
		for (int i = 0; i < 3; i++)
		{
			this->score[i] = score[i];
		}
	}
int getScore()
	{
		return score[0] + score[1] + score[2];
	}
};
int main()
{
	int n;
	cin >> n;
	Student* stu = new Student[n];
	for (int i = 0; i < n; i++)
	{
		string name;
		cin >> name;
		stu[i].setName(name);
		int score[3];
		cin >> score[0] >> score[1] >> score[2];
		stu[i].setScore(score);
		//for (int j = 0; j < 3; j++)
		//{
		//	stu[i].getScore = score[j];
		//}
	}
	for (int i = 0; i < n; i++)
	{
		cout << stu[i].getName()
			<< " "
			<< stu[i].getScore()
			<< endl;
	}
	//system("pause");
	return 0;
}