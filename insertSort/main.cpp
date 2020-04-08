#include<iostream>
using namespace std;

int main()
{
	int num[10] = { 3,5,7,7,5,8,934,65,78,56};
	int j;
	for (int i = 1; i < 10; ++i)
	{
		int sortNum = num[i];
		for (j = i-1; sortNum > num[j] && j >=0; j--)
		{
			num[j+1]= num[j];
		}

		num[j+1]=sortNum;
	}


	for (int i = 0; i < 10; i++)
		cout << num[i] << endl;

	return 0;

}

