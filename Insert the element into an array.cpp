#include <bits/stdc++.h>

#define ll long long
#define ull double long
void nothing(){}
//inline void debug();


int main() {
  //  debug(); //IGNORE THIS 

    int n=0,r,q;

    std::cin>> r;
    int* x = new int[r];

    for(int i=0; i<r; i++){
        n++;
        std::cin>>x[i];
    }
    int ind, num;
    std::cin>>ind>>num;
    for(int i=n; i>=ind; i--){
        x[i]=x[i-1];
    }
    x[ind-1]=num;
    for(int i=0;i<=n;i++)std::cout<<x[i]<<" ";
}
