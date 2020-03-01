#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int array[10][4];
	for (int i = 0; i < n; i++)
	{
		cin >> array[i][0]
			>> array[i][1]
			>> array[i][2]
			>> array[i][3];
	}
	int flag[10] = { 0 };
	for (int i = 0; i < n; i++)
	{
		for (int j = array[i][0]; j <= array[i][1]; j++)
		{
			if (j % array[i][2] == 0&& j % array[i][3] == 0)
			{
				flag[i]++;
			}
		}
	}

	for (int k = 0; k < n; k++)
	{
		cout << flag[k] << endl;
	}
	system("pause");     
	return 0;
}