#include<iostream>
#include<string>
using namespace std;
class Student 
{
private:
	string name;
	string alias;
public:
	Student(string _name, string _alias)
	{
		name = _name;
		alias = _alias;
		cout << name << "'s constructor"<<endl;
	}
	~Student()
	{
		cout << name << "'s destructor"<<endl;
	}
	void print()
	{
		cout << alias << " is another name for " << name << endl;
	}
};
int main()
{
	string name, alias;
	cin >> name >> alias;
	Student s(name, alias);
	s.print();
	//system("pause");
	return 0;
}