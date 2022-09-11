#include <iostream>
using namespace std;
int main()
{
	int n,A=0,D=0;
	cin >> n;
	string s;
	cin >> s;
	if (n >= 1 && n <= 100000)
	{
		for (int i = 0; i < n; i++)
		{
			if (s[i] == 'A')
				A++;
			else if (s[i] == 'D')
				D++;

		}
		if (A > D)
			cout << "Anton";
		else if (A < D)
			cout << "Danik";
		else
			cout << "Friendship";

	}
	return 0;
}
