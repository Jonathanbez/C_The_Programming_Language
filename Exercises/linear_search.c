#include <stdio>

int search(int arr[], int N, int x)
{
	for (int i = 0; i < N; i++)
		if (arr[i] == x)
			return i;
	return -1;
}

int main(void)
{
	int arr[] = { 2, 3, 4, 10, 40, 42, 50};
	int x = 10; 
