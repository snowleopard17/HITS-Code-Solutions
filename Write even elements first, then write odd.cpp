#include <bits/stdc++.h>

int main() {

    int n;
    std::cin>>n;

    int* x = new int[n];
    for(int i=0; i<n; i++){
        std::cin>>x[i];
    }
    

    for(int i=0; i<n; i++){
    if(x[i]%2==0)
        std::cout<<x[i]<<" ";
    }

    for(int i=0; i<n; i++){
    if(x[i]%2!=0)
        std::cout<<x[i]<<" ";
    }
  
}