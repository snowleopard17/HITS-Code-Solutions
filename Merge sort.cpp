#include <bits/stdc++.h>
using namespace std;
#define ld double long

//Cheated FROM GFG 

void printArray(int* arr, int size){
  for(int i=0; i< size; i++){
    cout<< arr[i] <<' ';
  }
}
void mergeArray(int* arr, int left, int mid, int right)
{
    int arr1Size = mid-left+1;
    int arr2Size = right-mid;
    int* arr1 = new int[arr1Size];
    int* arr2 = new int[arr2Size];
    
    for(int i=0; i< arr1Size; i++)
      arr1[i] = arr[left+i];
    for(int i=0; i< arr2Size; i++)
      arr2[i] = arr[mid+1+i];
    int arr1Ind = 0, arr2Ind = 0, arrInd = left;
    while(arr1Ind<arr1Size && arr2Ind<arr2Size)
    {
        if(arr1[arr1Ind] <= arr2[arr2Ind])
        {
            arr[arrInd++] = arr1[arr1Ind++];
        }
        else 
        { 
            arr[arrInd++] = arr2[arr2Ind++];
        }
    }

    while(arr1Ind<arr1Size)
    {
      arr[arrInd++] = arr1[arr1Ind++];
    }

    while(arr2Ind<arr2Size)
    {
      arr[arrInd++] = arr2[arr2Ind++];
    }

}

void mergeSort(int* arr, int left,int right)
{
    if(left >= right)
        return;

    int mid = (left + right)/2;
    mergeSort(arr, left, mid);
    mergeSort(arr, mid+1, right);
    mergeArray(arr, left, mid, right);


}


int main()
{
    int x;
    cin >> x;
    int* array = new int[x];

    for(int i=0; i<x; i++)
        cin>> array[i];
    mergeSort(array, 0, x-1);
    printArray(array, x);

}