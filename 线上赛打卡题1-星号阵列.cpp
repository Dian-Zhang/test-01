#include<iostream>
using namespace std;
int main()
{
	int m;
	cin >> m;
	for (int i = 1; i <= 2 * m - 1; i++)
	{
		if (i == 1 || i == 2 * m - 1)
		{
			for (int j = 0; j < m - 1; j++) { cout << " "; }
			cout << "*" << endl;
		}
		if (i > 1 && i <= m)
		{
			for (int j = 0; j < m - i; j++) { cout << " "; }
			cout << "*";
			for (int j = 0; j < 2*(i-1)-1; j++) { cout << " "; }
			cout << "*"<<endl;
		}
		if (i > m && i < 2 * m - 1)
		{
			for (int j = m; j <i;j++) { cout << " "; }
			cout << "*";
			for () { cout << " "; }
			cout << "*" << endl;
		}
	}
	system("pause");
}