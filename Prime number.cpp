#include <bits/stdc++.h>

void nothing(){}


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

    if(isprime2(x))std::cout<<"Yes";
    else std::cout<<"No";

}

    

int main(){//IGNORE

    mainpoint();
}