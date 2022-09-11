#include<iostream>
using namespace std;
int main()
{
	string username;
	cin >> username;
	int n = username.length();
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{

			if (username[i] == username[j])
			{
				for (int k = j; k < n; k++)
				{
					username[k] = username[k + 1];
				}
				n--;
				j--;
			}
		}

	}
	//int len = username.length();

	if (n % 2 == 0)
	{
		cout << "CHAT WITH HER!" << endl;
	}
	else
		cout << "IGNORE HIM!" << endl;
	return 0;
}