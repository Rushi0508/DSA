// Bubble Sort
// TC - O(n*n)
// SC - O(1)
// Best Case - O(n)
// Worst Case - O(n*n)
// Used when small array size
// Stable Algorithm

#include <iostream>  
  
using namespace std;  
  
int partition (int a[], int s, int e){
    int pivot = a[s];
    int c=0;
    for(int i=s+1;i<=e;i++){
        if(a[i]<=pivot){
            c++;
        }
    }
    int pivotIndex = s+c;
    swap(a[pivotIndex], a[s]);
    int i=s,j=e;
    while(i<pivotIndex && j>pivotIndex){
        while(a[i]<pivot){
            i++;
        }
        while(a[j]>pivot){
            j--;
        }
        if(i<pivotIndex && j> pivotIndex){
            swap(a[i++], a[j--]);
        }
    }
    return pivotIndex;
}
  
void quickSort(int a[], int s, int e)  
{  
    if(s<e){
        int p = partition(a,s,e);
        quickSort(a,s,p-1);
        quickSort(a,p+1,e);
    }
}  
  
/* Function to print the array */  
void printArray(int a[], int n)  
{  
    int i;  
    for (i = 0; i < n; i++)  
        cout<<a[i]<<" ";  
}  
  
int main()  
{  
    int a[] = { 11, 30, 24, 7, 31, 16, 39, 41 };  
    int n = sizeof(a) / sizeof(a[0]);  
    cout<<"Before sorting array elements are - \n";  
    printArray(a, n);  
    quickSort(a, 0, n - 1);  
    cout<<"\nAfter sorting array elements are - \n";  
    printArray(a, n);  
    return 0;  
}  