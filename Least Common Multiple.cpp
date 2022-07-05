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
ll lcmEuclid(ll x, ll y){
    return (x*y)/hcf(x, y);
}
ll lcmNonEuclid(ll x, ll y){
    if(y<x)swap(y,x);
    if(x==1)return y;
    if(y%x==0)return y;
    if(!isodd(y)&&x==2)return y;
    
    int j=1;
    for(int i=1; i<=x; i++){
        while(y*i>x*j)
            j++;
        if(x*j==y*i)return y*i;
    }

    return 1;
}

void mainpoint() {//MAIN FUNCTION
    ll x,y;
    std::cin>>x>>y;
    std::cout<< lcmNonEuclid(x,y);
}


int main(){//IGNORE

    mainpoint();
}