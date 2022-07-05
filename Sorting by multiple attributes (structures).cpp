#include <bits/stdc++.h>
using namespace std;
#define ld double long

//cheated from gfg

class List{
  public:  
  int i;
  int a;
  int b;
};

void merge(List** array, int const left, int const mid, int const right)
{
    auto const subArrayOne = mid - left + 1;
    auto const subArrayTwo = right - mid;
  
    auto **leftArray = new List*[subArrayOne],
         **rightArray = new List*[subArrayTwo];
  
    for (auto i = 0; i < subArrayOne; i++)
        leftArray[i] = array[left + i];
    for (auto j = 0; j < subArrayTwo; j++)
        rightArray[j] = array[mid + 1 + j];
  
    auto indexOfSubArrayOne = 0, // Initial index of first sub-array
        indexOfSubArrayTwo = 0; // Initial index of second sub-array
    int indexOfMergedArray = left; // Initial index of merged array
  
    while (indexOfSubArrayOne < subArrayOne && indexOfSubArrayTwo < subArrayTwo) {
        if (leftArray[indexOfSubArrayOne]->a < rightArray[indexOfSubArrayTwo]->a) {
            array[indexOfMergedArray] = leftArray[indexOfSubArrayOne];
            indexOfSubArrayOne++;
        }
        else if(leftArray[indexOfSubArrayOne]->a == rightArray[indexOfSubArrayTwo]->a){
          if(leftArray[indexOfSubArrayOne]->b > rightArray[indexOfSubArrayTwo]->b){
            array[indexOfMergedArray] = leftArray[indexOfSubArrayOne];
            indexOfSubArrayOne++;
          }
          else {
            array[indexOfMergedArray] = rightArray[indexOfSubArrayTwo];
            indexOfSubArrayTwo++;
          }
        }
        else {
            array[indexOfMergedArray] = rightArray[indexOfSubArrayTwo];
            indexOfSubArrayTwo++;
        }
        indexOfMergedArray++;
    }

    while (indexOfSubArrayOne < subArrayOne) {
        array[indexOfMergedArray] = leftArray[indexOfSubArrayOne];
        indexOfSubArrayOne++;
        indexOfMergedArray++;
    }

    while (indexOfSubArrayTwo < subArrayTwo) {
        array[indexOfMergedArray] = rightArray[indexOfSubArrayTwo];
        indexOfSubArrayTwo++;
        indexOfMergedArray++;
    }
}
  
void mergeSort(List** array, int const begin, int const end)
{
    if (begin >= end)
        return; // Returns recursively
  
    auto mid = begin + (end - begin) / 2;
    mergeSort(array, begin, mid);
    mergeSort(array, mid + 1, end);
    merge(array, begin, mid, end);
}
void swap(List& a, List& b){
  auto temp = a;
  a = b;
  b = temp;
}
  
void reverseSort(List** array, int size){
  mergeSort(array, 0, size-1);
  int mid = size/2;
  for(int i=0; i<mid; i++){
    swap(array[i], array[size-i-1]);
  }
  
}
void printArray(List** A, int size)
{
    for (auto i = 0; i < size; i++)
        cout << A[i]->i << " ";
}


int main()
{
    int x;
    cin>> x;
    List** ls = new List*[x];
    for(int i=0; i<x; i++){
      ls[i] = new List;
      ls[i]->i = i+1;
      cin >> ls[i]->a;
      cin>> ls[i]->b;
      
    }
    reverseSort(ls, x);
    printArray(ls, x);
}
