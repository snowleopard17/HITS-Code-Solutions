#include <bits/stdc++.h>

#define ll long long
#define ull double long
void nothing(){}


ull fact(int x, int i=1){
    ull a=1;
    for(i=i+1; i<=x; i++)a*=i;
    return a;
}

void mainpoint() {//MAIN FUNCTION
    int x,y;
    std::cin>>x>>y;
    std::cout<<fact(x,abs(y-x))/fact(y);
    
}




int main(){//IGNORE

    mainpoint();
}