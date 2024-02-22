#include<iostream>
using namespace std;

void Insertion_Sort(int arr[], int size)
{
	int bia;
	for (int i = 0; i < size; i++)
	{
		bia = i;

		for (; bia > 0; bia--)
		{
			if (arr[bia-1] > arr[bia])
			{
				swap(arr[bia - 1], arr[bia]);
			}
		}
	}
}

int main()
{
	int size;
	cin >> size;

	int* arr = new int[size];

	cout << "Enter the elements" << endl;
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}

	Insertion_Sort(arr, size);
	cout << "The array is:" << endl;

	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	return 0;
}