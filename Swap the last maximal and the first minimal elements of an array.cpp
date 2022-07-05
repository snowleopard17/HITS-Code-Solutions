#include <bits/stdc++.h>

#define ll long long
#define ull double long
void nothing(){}
//inline void debug();



int main() {
 //   debug(); //IGNORE THIS 

    int n=0,r,q;

    std::cin>> r;
    int* x = new int[r];
    for(int i=0; i<r; i++){
        n++;
        std::cin>>x[i];

    }
    
    int minn=2147483647, maxn=-2147483647, mini=-1,maxi=-1,count=0;    
    for(int i=0; i<n; i++){
        if(minn>x[i]){
            minn = x[i];
            mini = i;
        }
        if(maxn<=x[i]){
            maxn = x[i];
            maxi = i;
        }
    }

    if(maxn!=minn){
    int temp=x[mini];
    x[mini]=x[maxi];
    x[maxi]=temp;
    }
    for(int i=0; i<n; i++)
    std::cout<< x[i]<<" ";
}