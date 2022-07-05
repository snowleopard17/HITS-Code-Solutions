#include <bits/stdc++.h>

#define ll long long
#define ull double long
void nothing(){}
//inline void debug();


/* I am not sure if this question needed to be done in different way, 
like some partial float store in array or what.
Will fix it if rejected
*/
int main() {
   // debug(); //IGNORE THIS 

    int n=0,r,q;

    r=2;

    ll* x = new ll[r];  
    for(int i=0; i<r; i++){
        std::cin>>x[i];

    }
    std::cout<<x[0]*(x[0]>x[1])+x[1]*(x[1]>x[0]);
        
}