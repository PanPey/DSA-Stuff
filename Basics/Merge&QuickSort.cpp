// Both merge and quicksort are DNC Algorithms

#include <bits/stdc++.h>
using namespace std;
 
#define N 7
 
void Merge(int arr[], int aux[], int low, int mid, int high)
{
 
 // aux is a temp array which we use to get a sorted array and finally we copy this array to our original array.
    int k = low, i = low, j = mid + 1;
 
    while (i <= mid && j <= high)
    {
        if (arr[i] <= arr[j]) {
            aux[k++] = arr[i++];
        }
        else {
            aux[k++] = arr[j++];
        }
    }
 
 // if the right part is exhausted then copy all elemnets to aux.
    while (i <= mid) {
        aux[k++] = arr[i++];
    }

 // if the left part is exhausted then copy all elemnets to aux.
  while (j <= high) {
        aux[k++] = arr[j++];
    }
 
 // just copy the elements to orih=ginal array
    for (int i = low; i <= high; i++) {
        arr[i] = aux[i];
    }
 
}
 
void mergesort(int arr[], int aux[], int low, int high)
{

     if(low>=high) //base case....if array has 0 or 1 element only
       return;
 
 // Dividing step
    int mid = (low + ((high - low)/2)); // use this to calculate mid to prevent integer overflow
 
    mergesort(arr, aux, low, mid);          
    mergesort(arr, aux, mid + 1, high);     
 
 //merging the two parts
    Merge(arr, aux, low, mid, high);        
}


int partition(int a[], int start, int end)
{

    int pivot = a[end];
    int i = start-1;

    for(int j=start; j<end; j++){
        if(a[j]<=pivot){
            i++;
            swap(a[i], a[j]);
        }
    }

   swap(a[i+1], a[end]);
   return i+1;
}
 
void quicksort(int a[], int start, int end)
{
    if (start >= end) {
        return;
    }
 
 // dividing the array about pivot
    int pivot = partition(a, start, end);
 
 // recursivley calling quicksort on left part and right part for sorting
    quicksort(a, start, pivot - 1);
 
    quicksort(a, pivot + 1, end);
}
 
void print(int a[], int n){
    for(int i=0; i<n; i++){
        cout << a[i] << " ";
    }
    cout << endl;
}

 
int main(void)
{
    int arr[N], aux[N];
    srand(time(NULL));
 
    for (int i = N; i>0; i--) {
        aux[i] = arr[i] = i;
    }

    mergesort(arr, aux, 0, N - 1);
    print(arr, N);
    quicksort(arr, 0, N-1);
    print(arr, N);
    
}

// Merge Sort : TC ---> O(nlogn).....not in place sorting algo... requires more space than quicksort
// Quick Sort :TC ---> O(n*n) and O(nlogn) in average case.....in place sorting algo....requires less space than mergesort
