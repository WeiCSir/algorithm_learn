#include<iostream>
using namespace std;

int main()
{
	int num[10] = { 3,5,7,7,5,8,934,65,78,56};

	for (int i = 1; i < 10; ++i)
	{
		int j = i;
		while (num[j] < num[j - 1])
		{
			int temp = num[j];
			num[j] = num[j - 1];
			num[j - 1] = temp;
			j--;
			if (j == 0)
				break;

		}
	}


	for (int i = 0; i < 10; i++)
		cout << num[i] << endl;

	return 0;

}

