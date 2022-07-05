#include <bits/stdc++.h>

#define ll long long
#define ull double long
void nothing(){}



int egyptian(int x, int len, int j=0, int a=0){
    int pwr=pow(10,len+1);
    if(len==0){
        std::cout<<"\n";
        return x % pwr;
    }
    len--;
    a=(x/pow(10,len))-(a*10);
    std::cout<< a<<" ";
    a=(x/pow(10,len));
    j++;
    std::cout<< egyptian(x, len, j, a)<<" ";
    return x % pwr/pow(10,len+1);
}

void mainpoint() {//MAIN FUNCTION
    int x,len=1,n;
    std::cin>>x;
    n=x;
    while(x/=10)len++;

    egyptian(n, len);
    
}


int main(){//IGNORE

    mainpoint();
}