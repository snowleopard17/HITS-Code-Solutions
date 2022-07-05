#include <cstdlib> 
#include <ctime> 
#include <iostream>
using namespace std; 
  

//Cheated From GFG

int partition (int* arr, int low, int high) 
{
    srand((unsigned)time(0)); 

    int randi = (rand() % (high-low));
    if(randi<low)randi+=low;
    swap(arr[high], arr[randi]);
    int pivot = arr[high];
    int i = (low-1);
  
    for (int j = low; j <= high - 1; j++)  
        if (arr[j] < pivot){ 

            swap(arr[++i], arr[j]); 
        }
    swap(arr[i + 1], arr[high]); 
    return (i + 1); 
} 
  

void quickSort(int* arr, int low, int high) 
{ 
    if (low < high) 
    { 

        int pi = partition(arr, low, high); 
  
        quickSort(arr, low, pi - 1); 
        quickSort(arr, pi + 1, high); 
    } 
} 
  
void printArray(int* arr, int size) 
{ 
    int i; 
    for (i = 0; i < size; i++) 
        cout << arr[i] << " "; 
    cout << endl; 
} 
  
int main() 
{ 
    int x;
    cin >> x;
    int* arr = new int[x];
    for(int i=0; i<x; i++)
        cin>> arr[i];

    quickSort(arr, 0, x - 1); 

    printArray(arr, x); 
    return 0; 
} 