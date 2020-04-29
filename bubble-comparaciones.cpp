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
   int numero=0;

	for (int i = 0; i < n-1; i++) 
	{ 
		swapped = false; 
		for (int j = 0; j < n-i-1; j++) 
		{ 
			numero++;
			cout<<numero<<"-";
			if (arr[j] > arr[j+1]) 
			{ 
			swap(&arr[j], &arr[j+1]); 
			swapped = true; 
			} 
		}
	// IF no two elements were swapped by inner loop, then break 
		if (swapped == false) 
			break; 
	}
	cout<<endl;
} 

// An optimized version of Bubble Sort 
void bubbleSort2(int arr[], int n) { 
	bool swapped;
   int numero=0;

	for (int i = 0; i < n-1; i++) 
	{ 
		swapped = false; 
		cout<<"Para i="<<i<<endl;
		for (int j = 0; j < n-i-1; j++) 
		{ 
			numero++;
			cout<<numero<<"-";
			if (arr[j] > arr[j+1]) 
			{ 
			swap(&arr[j], &arr[j+1]); 
			swapped = true; 
			}
		}
	   numero=0;
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
	 cout<<"Compracion en el peor de los casos, ordenados de manera inversa: "<<endl;
	 cout<<"Para "<<n<<" se realizan todas estas comparaciones: "<<endl;
	bubbleSort(arr, nn);

	 for(int i=1;i<=n;i++){
		arr[i-1]=n-i+1;
	 }
	 cout<<"La sumatoria es: "<<endl;
	bubbleSort2(arr, nn);
	//printf("Sorted array: \n"); 
	//printArray(arr, nn);
	 cout<<"Lo que representa la sumatoria de los (n-1) primeros numeros"<<endl;
	return 0; 
} 

