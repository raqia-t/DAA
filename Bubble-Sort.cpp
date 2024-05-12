#include<iostream>
using namespace std;

void Bubble_Sort(int arr[], int size)
{
	bool swapped;
	for (int i = 0; i < size-1; i++)
	{
		for (int j = 0; j < size - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				swap(arr[j], arr[j + 1]);
				swapped = true;
			}

			if (swapped= false)
			{
				break;
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

	Bubble_Sort(arr, size);
	cout << "The array is:" << endl;

	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	return 0;
}