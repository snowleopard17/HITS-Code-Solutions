#include <cstdlib> 
#include <ctime> 
#include <iostream>
using namespace std; 
  

//Cheated From GFG

void heapify (int* arr, int size, int node) 
{
    int largest = node; 
    int leftChild = 2*node+1;
    int rightChild = 2*node+2;

    if(leftChild<size && arr[leftChild]> arr[largest])
        largest = leftChild;
    if(rightChild<size && arr[rightChild]>arr[largest])
        largest = rightChild;

    if(largest!=node){
        swap(arr[node], arr[largest]);
        heapify(arr, size ,largest);
    }

} 
  

void heapsort(int* arr, int size) 
{ 
    for(int i=size/2-1; i>=0; i--)
        heapify(arr, size, i);

    for(int i=size-1; i>0; i--){
        swap(arr[0],arr[i]);
        heapify(arr, i, 0);
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

    heapsort(arr, x); 

    printArray(arr, x); 
    return 0; 
} 