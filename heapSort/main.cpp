#include<iostream>
using namespace std;

	int currentLength;

	int Left(int index) {return index*2+1;}
	int Right(int index) {return index*2 +2;} 
	int swap(int * num1, int* num2)
	{
		int temp = *num1;
		*num1 = *num2;
		*num2 = temp;
		return 0;
	}

	void maxHeapify(int num[], int index)
	{
		int thisHeapMaxIndex=0;

		int leftChildIndex =  Left(index);
		int rightChildIndex = Right(index);


		if((leftChildIndex < currentLength) && (num[leftChildIndex] > num[index]))
			thisHeapMaxIndex = leftChildIndex;
		else
			thisHeapMaxIndex = index;

		if((rightChildIndex < currentLength) && (num[rightChildIndex] > num[thisHeapMaxIndex]))
			thisHeapMaxIndex =rightChildIndex;

		if(thisHeapMaxIndex != index)
		{
			swap(&num[thisHeapMaxIndex], &num[index]);
			maxHeapify(num, thisHeapMaxIndex);
		}

	}

	void buildMaxHeap(int num[], int numMaxIndex)
	{
		currentLength = numMaxIndex;

		for(int i = ((numMaxIndex-1) >> 1); i >= 0; i--)
		{
			maxHeapify(num, i);
		}
	}


	void heap_sort(int num[], int lengSize)
	{
		buildMaxHeap(num, lengSize);
		for(int i = lengSize -1; i >=1; i--)
		{
			swap(&num[0], &num[i]);
			currentLength--;
			maxHeapify(num, 0);
		}
	}

int main()
{

	int num[8] = {34, 32, 43, 33, 87, 32, 54, 21};
	heap_sort(num, 8);
	for(int i =0; i < 8; i++)
	{
		cout << num[i] << " ";
	}

	cout <<endl;
	return 0;

}