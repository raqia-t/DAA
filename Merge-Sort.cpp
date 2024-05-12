#include<iostream>
using namespace std;

#define MAX_SIZE 10

void Merge(int theArray[], int first, int mid, int last) 
{
    int tempArray[MAX_SIZE];
    int first1 = first;
    int last1 = mid;
    int first2 = mid + 1;
    int last2 = last;
    int index = first1; 

    for (; (first1 <= last1 && first2 <= last2); ++index) 
    {
        if (theArray[first1] < theArray[first2]) 
        {
            tempArray[index] = theArray[first1];
                ++first1;
        }
        else 
        {
            tempArray[index] = theArray[first2];
                ++first2;
        }
    }

    for (; first1 <= last1; ++first1, ++index)
        tempArray[index] = theArray[first1];

    for (; first2 <= last2; ++first2, ++index)
        tempArray[index] = theArray[first2];

    for (index = first; index <= last; ++index)
        theArray[index] = tempArray[index];
}

void MergeSort(int values[], int  first, int  last)
{
	if (first < last) 	                     
	{
		int  middle = (first + last) / 2;
		MergeSort(values, first, middle);
		MergeSort(values, middle + 1, last);
		Merge(values, first, middle, last);
	}
}

int main()
{
    int array[MAX_SIZE] = { 1, 8, 6, 10, 7, 10, 10, 2003, 15, 11 };
    MergeSort(array, 0, MAX_SIZE - 1);
    for (int i = 0; i < MAX_SIZE; i++)
        cout << array[i] << " ";
    cout << endl;
	return 0;
}