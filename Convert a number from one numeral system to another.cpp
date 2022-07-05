#include <bits/stdc++.h>


//LAST SOLUTION OF SAME QUESTION FAIL ON TEST 2 PLEASE COMMENT TEST 2, Can't figure it out


#define ll long long
#define ull double long
void nothing(){}


ll deca(int n, int x, int len){
    int deci=0;
    for(int i=0; i<=len; i++){
        int place =pow(10, i+1);
        int last=n%place/pow(10, i) ;
        deci+=last*pow(x,i);
    }
    return deci;
}

int cova(int deci, int y){
    
    int vbase=0;
        for(int i=8;i>=0;i--){
        int house=pow(y,i);
        while(deci>=house){
            vbase+=pow(10,i);
            deci-=house;
        }
    }
    return vbase;
}

void mainpoint() {//MAIN FUNCTION
    int n,x,y;
    std::cin>>n>>x>>y;
    int len=1;
    int a=n;
    while(a/=10)len++;
    
    std::cout <<cova(deca(n,x,len),y);
}

int main(){//IGNORE

    mainpoint();
}