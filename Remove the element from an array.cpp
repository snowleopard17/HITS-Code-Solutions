#include <bits/stdc++.h>

#define ll long long
#define ull double long
void nothing(){}
//inline void debug();


int main() {
   // debug(); //IGNORE THIS 

    int r,q;

    std::cin>> r;
    int* x = new int[r];

    for(int i=0; i<r; i++){
        std::cin>>x[i];
    }
    int ind;
    std::cin>>ind;
    for(int i=ind-1; i>0; i--){
        x[i]=x[i-1];
    }
    x = &x[1];
    for(int i=0;i<r-1;i++)std::cout<<x[i]<<" ";
}