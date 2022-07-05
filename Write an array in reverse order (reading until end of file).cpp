#include <iostream>
using namespace std;


int main(){
    int a,b;
    
    int* arr = new int[9999999];
    int size=0;
    while(cin>>a){
        arr[size]=a;
        size++;
    }
    
    for(int i=size-1; i>=0; i--){
        cout<< arr[i]<<" ";
    }
    
    
}