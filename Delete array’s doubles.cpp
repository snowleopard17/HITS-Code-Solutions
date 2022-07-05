#include <bits/stdc++.h>

#define ll long long
#define ull double long
void nothing(){}
//inline void debug();



int main() {
  //  debug(); //IGNORE THIS 

    int n=0,r,q;

    std::cin>> r;
    bool single = true;
    int* x = new int[r];
    for(int i=0; i<r; i++){
        std::cin>>q;
        
        single = true;
        for(int j=0; j<n; j++){
            if(q==x[j])single=false;
        }

        if(single){
            x[n]=q;
            n++;
        }
    }
    for(int i=0; i<n; i++)std::cout<<x[i]<<" ";
        
}