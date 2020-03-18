#include<iostream>
#include<string>
using namespace std;
class Student
{
private:
	string name;//attributes
	int score;
public:
	void setName(string name)//methods
	{
		this->name=name;
	}
	string getName()
	{
		return name;
	}
	void setScore(int score)
	{
		this->score = score;
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
	Student* stu = new Student[n];
	for (int i = 0; i < n; i++)
	{
		string name;
		int score;
		cin >> name >> score;
		stu[i].setName(name);
		stu[i].setScore(score);

	}
	for(int i = 0; i < n; i++)
	{
		cout << stu[i].getName() << " " 
			<< stu[i].getScore() << endl;
	}
	//system("pause");
	return 0;
}