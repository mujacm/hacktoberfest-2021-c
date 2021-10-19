
#include <math.h>
#include <stdio.h>


void insertionSort(int a[], int n)
{
	int i, current, j;
	for (i = 1; i < n; i++) {
		current = a[i];
		j = i - 1;

		while (j >= 0 && a[j] > current) {
			a[j + 1] = a[j];
			j = j - 1;
		}
		a[j + 1] = current;
	}
}


void displayArray(int arr[], int n)
{
	int i;
	for (i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");
}


int main()
{
	int arr[] = { 12, 11, 13, 5, 6 };
	int n = sizeof(arr) / sizeof(arr[0]);

	insertionSort(arr, n);
	displayArray(arr, n);

	return 0;
}
