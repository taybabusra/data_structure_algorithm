#include<iostream>
using namespace std;
//Argument passed and no return value
void display(int arr[], int size) {
   for(int i = 0; i<size; i++)
      cout << arr[i] << " ";
   cout << endl;
}
void selectionSort(int arr[], int size) {
   int i, j, imin;
   for(i = 0; i<size-1; i++) {
      imin = i;   //get index of minimum data
      for(j = i+1; j<size; j++)
         if(arr[j] < arr[imin])
            imin = j;
         //placing in correct position
         swap(arr[i], arr[imin]);
   }
}
int main() {
   int n;
   cout << "Enter the number of elements: ";
   cin >> n;
   int arr[n];
   cout << "Enter elements:" << endl;
   for(int i = 0; i<n; i++) {
      cin >> arr[i];
   }
   cout << "Array before Sorting: ";
   display(arr, n);
   selectionSort(arr, n);
   cout << "Array after Sorting: ";
   display(arr, n);
}

