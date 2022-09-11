#include <iostream>
using namespace std;
int main()
{
	int n,temp;
	cin >> n;
	//int min = 1;
	int* arr=new int(n);
	
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	for (int j = 0; j < n; j++)
	{
		for (int x = j + 1; x < n; x++)
		{
			if (arr[j] > arr[x])
			{
				temp = arr[x];
				arr[x] = arr[j];
				arr[j] = temp;
			}
		}
	}
	for (int h = 0; h < n; h++)
	{
		cout << arr[h]<<" ";
	}
	return 0;
}