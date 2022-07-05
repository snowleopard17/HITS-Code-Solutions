#include <iostream>
using namespace std;

int search(int* array, int length, int x){ 
    
  int l=0,r=length-1;
  
  
  while(l<=r)
  {
      int mid = (l+r)/2;
      
      if(array[mid]==x){
          return mid+1;
      }
      else if(array[mid] > x){
          r = mid -1;
      }
      else if(array[mid] < x){
          l = mid+1;
      }
      
  }
  return -1;
    
} 




int main(){
    int length;
    cin>> length; 
    
    int* array = new int[length];
    for(int i=0; i< length; i++)
        cin>> array[i];
    
    int times;
    cin>> times;
    
    for(int i=0; i<times; i++){
        //We will do search here
        // There will search function 
        int x;
        cin>> x;
        cout<< search(array, length, x);
        cout<< endl;
        
    }
    
}