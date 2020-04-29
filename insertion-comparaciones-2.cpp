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

        while (j >= 0 && arr[j] > key) 
        {  
	 		   numero++;
			   cout<<numero<<"-";
            arr[j + 1] = arr[j];  
            j = j - 1;  
        }  
        arr[j + 1] = key;  
    }
	 cout<<endl;
}  
 
void insertionSort2(int arr[], int n)  
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
		  cout<<"Para i="<<i<<", para j="<<j<<endl; 
        while (j >= 0 && arr[j] > key) 
        {  
			  numero++;
			  cout<<numero<<"-";
            arr[j + 1] = arr[j];  
            j = j - 1;  
        }
        arr[j + 1] = key;
    	 cout<<endl;
		 numero=0; 
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
	 const int n=2; //numero de valores del arreglo
    int arr[n];  
	 for(int i=1;i<=n;i++){
		arr[i-1]=n-i+1;
	 }

	 cout<<"Compracion en el peor de los casos, ordenados de manera inversa: "<<endl;
	 cout<<"Para "<<n<<" se realizan todas estas comparaciones: "<<endl;
    int nn = sizeof(arr) / sizeof(arr[0]);  
  
    insertionSort(arr, nn);
    //printArray(arr, nn);

	 cout<<endl;

	 for(int i=1;i<=n;i++){
		arr[i-1]=n-i+1;
	 }

	 cout<<"La sumatoria es: "<<endl;  
  
    insertionSort2(arr, nn);

	 cout<<"Lo que representa la sumatoria de los (n-1) primeros numeros"<<endl;  
  
    return 0;  
}  
  
