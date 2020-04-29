//https://www.geeksforgeeks.org/bubble-sort/

#include <stdio.h>
#include <iostream>

using namespace std;

void swap(int *xp, int *yp) 
{ 
	int temp = *xp; 
	*xp = *yp; 
	*yp = temp; 
} 

// An optimized version of Bubble Sort 
void bubbleSort(int arr[], int n) { 
	bool swapped; 
	for (int i = 0; i < n-1; i++) 
	{ 
		swapped = false; 
		for (int j = 0; j < n-i-1; j++) 
		{ 
			cout<<j+1<<"-";
			if (arr[j] > arr[j+1]) 
			{ 
			swap(&arr[j], &arr[j+1]); 
			swapped = true; 
			} 
		}
		cout<<endl;
		cout<<endl;
	// IF no two elements were swapped by inner loop, then break 
		if (swapped == false) 
			break; 
	} 
} 

/* Function to print an array */
void printArray(int arr[], int size) 
{ 
	int i; 
	for (i=0; i < size; i++) 
		printf("%d ", arr[i]); 
	cout<<endl; 
} 

// Driver program to test above functions 
int main() 
{ 
	 const int n=10; //numero de valores del arreglo
    int arr[n];  
	 for(int i=1;i<=n;i++){
		arr[i-1]=n-i+1;
	 }

    int nn = sizeof(arr) / sizeof(arr[0]);

	bubbleSort(arr, nn);

	//printf("Sorted array: \n"); 
	//printArray(arr, nn); 
	return 0; 
} 

