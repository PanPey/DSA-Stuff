#include <bits/stdc++.h>
using namespace std;
 
#define N 7
 
void Merge(int arr[], int aux[], int low, int mid, int high)
{
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
 
    while (i <= mid) {
        aux[k++] = arr[i++];
    }
 
    for (int i = low; i <= high; i++) {
        arr[i] = aux[i];
    }
}
 
void mergesort(int arr[], int aux[], int low, int high)
{
    if (high == low) {   
        return;
    }
 
    int mid = (low + ((high - low) /2));
 
    mergesort(arr, aux, low, mid);          
    mergesort(arr, aux, mid + 1, high);     
 
    Merge(arr, aux, low, mid, high);        
}


int partition(int a[], int start, int end)
{
    int pivot = a[end];
 
    int pIndex = start;
 
    for (int i = start; i < end; i++)
    {
        if (a[i] <= pivot)
        {
            swap(a[i], a[pIndex]);
            pIndex++;
        }
    }
 
    swap (a[pIndex], a[end]);
 
    return pIndex;
}
 
void quicksort(int a[], int start, int end)
{
    if (start >= end) {
        return;
    }
 
    int pivot = partition(a, start, end);
 
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

// Merge Sort : TC ---> O(nlogn).....not in place sort... requires more space than quicksort
// Quick Sort :TC ---> O(n*n) and O(nlogn) in best case.....in place....requires less space than mergesort



