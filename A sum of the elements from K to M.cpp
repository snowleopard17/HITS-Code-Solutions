#include <bits/stdc++.h>

#define ll long long
#define ull double long
void nothing(){}
//inline void debug();



int main() {
//    debug(); //IGNORE THIS 

    int n=0,r,q;

    std::cin>> r;
    bool single = true;
    int* x = new int[r];
    int k,m,sum=0;
    std::cin>>k>>m;
    for(int i=0; i<r; i++){
        std::cin>>x[i];

    }
    for(int i=k-1; i<m; i++)sum+=x[i];
    std::cout<<sum;
        
}