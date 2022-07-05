#include <bits/stdc++.h>

#define ll long long
void nothing(){}


bool isodd(int x){
    return x%2;
}
void swap(ll &x, ll &y){
    int a=x;
    x=y;
    y=a;
}
ll hcf(ll x, ll y){
    if(y==0)return x;
    else return hcf(y, x%y);
}


void mainpoint() {//MAIN FUNCTION
    ll x,y;
    std::cin>>x>>y;
    std::cout<< hcf(x,y);
}


int main(){//IGNORE

    mainpoint();
}