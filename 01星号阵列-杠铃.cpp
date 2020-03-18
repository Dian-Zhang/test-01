#include<iostream>
using namespace std;
void Square(int len)
{
	for (int i = 0; i < len; i++)
	{
		for (int j = 0; j < len; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
}
int main()
{
	int a;
	int b;
	cin >> a>>b;
	Square(b);
	for (int i = 0; i < (a - 2 * b); i++)
	{
		for (int j = 0; j < (b - 1) / 2; j++)
		{
			cout << " ";
		}
		cout << "*";
		cout << endl;
	}
	Square(b);
	//system("pause");
	return 0;
}