#include <bits/stdc++.h>

void nothing(){}//NOTHING

bool isprime2(int x){//RETURNS IF PRIME OR NOT
    int n=x;
    if(x<2)return false;
    if(x==2)return true;// 2 is only even prime
    for(int i=2; i<=n; i++){
        if(x%i==0)return false;
        else n=x/i; //ELIMINATES THE NON USABLE ITERATION(log(n))

    }
    return true;
}

void mainpoint() {//MAIN FUNCTION
    
    int x;
    std::cin>>x;

    for(int i=2; i<=x; i++){
        if(isprime2(i))std::cout<<i<<" ";
    }
}

int main(){

    mainpoint();
}