//https://www.geeksforgeeks.org/insertion-sort/

#include <bits/stdc++.h> 

using namespace std; 
  
void insertionSort(int arr[], int n)  
{  
    int i, key, j;
	 int numero=0;
  
    for (i = 1; i < n; i++) 
    {  
		  //inicia con la posicion 1 (segundo espacio), para correr n-1 posiciones del arreglo
        key = arr[i];
		  //j es un valor anterior al en estudio 
        j = i - 1;  
  
		  //va retrocediendo hasta llegar al inicio posicion 0

		  numero++;
		  cout<<numero<<"-";

        while (j >= 0 && arr[j] > key) 
        {  
            arr[j + 1] = arr[j];  
            j = j - 1;  
        }  
        arr[j + 1] = key;  
    }  
}  
  
void printArray(int arr[], int n)  
{  
    int i;  
    for (i = 0; i < n; i++)  
        cout << arr[i] << " ";  
    cout << endl; 
}  


int main()  
{  
	 const int n=10; //numero de valores del arreglo
    int arr[n];  
	 for(int i=1;i<=n;i++){
		arr[i-1]=n-i+1;
	 }

    int nn = sizeof(arr) / sizeof(arr[0]);  
  
    insertionSort(arr, nn);
    //printArray(arr, nn);  
  
    return 0;  
}  
  
