#include <bits/stdc++.h>
using namespace std;
#define ld double long
#define INT_MIN -2147483645
#define INT_MAX 2147483645

//cheated from gfg

void printArray(int* arr, int size){
  for(int i=0; i< size; i++){
    cout<< arr[i] <<' ';
  }
}
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
  

void heapsort(int* arr, int size, int t) 
{ 
    for(int i=size/2-1; i>=0; i--)
        heapify(arr, size, i);

    for(int i=size-1; i>size-t-1; i--){
        swap(arr[0],arr[i]);
        heapify(arr, i, 0);
    } 
} 
  

int main()
{
    int x,t;
    cin >> x>>t;
    int* array = new int[x];

    for(int i=0; i<x; i++)
        scanf("%d", &array[i]);
    heapsort(array,x, t);

    cout<< array[x-t];
}