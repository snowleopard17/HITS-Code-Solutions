#include <bits/stdc++.h>

#define ll long long
#define ull double long
void nothing(){}

int main() {


    int n,r;
    std::cin>>n;
    r=n;
    int* x = new int[n];
    while(r--){
        std::cin>>x[r];
    }

    for(int i=0; i<n; i++)std::cout<<x[i]<<" ";
}
