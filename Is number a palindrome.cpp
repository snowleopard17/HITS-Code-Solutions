#include <bits/stdc++.h>

#define ll long long
#define ull double long
void nothing(){}


bool palindrome(int n, int len){
    int fpr, lpr, last;
    int a[len];
    for(int i=0; i<len; i++){
        fpr=pow(10,i+1);
        lpr = n%fpr;
        a[i] = lpr/(fpr/10);
    }
    for(int i=0,j=len-1; i<len&&j>=0; i++,j--){
        if(a[i]!=a[j])return false;
    };

    
    return true;

}

void mainpoint() {//MAIN FUNCTION
    int n,x,y;
    std::cin>>n;
    int len=1;
    int a=n;
    while(a/=10)len++;
    palindrome(n,len);
    if(palindrome(n,len))std::cout<<"Yes";
    else std::cout<<"No";

}

int main(){//IGNORE

    mainpoint();
}