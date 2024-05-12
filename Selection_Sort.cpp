#include<iostream>
using namespace std;

void Selection_Sort(int arr[], int size)
{
	int smallest;

	for (int i = 0; i < size-1; i++)
	{
		smallest = i;
		for (int j = i + 1; j < size; j++)
		{
			if (arr[smallest] > arr[j])
			{
				smallest = j;
			}
		}

		swap(arr[i], arr[smallest]);
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

	Selection_Sort(arr, size);
	cout << "The array is:" << endl;

	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	return 0;
}