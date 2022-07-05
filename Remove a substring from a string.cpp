#include <bits/stdc++.h>

using namespace std;
// inline void debugmode();

int finder(string x, string a){
    for(int i=0; i<x.size(); i++){
        if(x[i]==a[0]){
            int r=i;
            for(int j=0; j<a.size(); j++){

                if(x[r]!=a[j]){ 
                    break;
                }
                else r++;
                if(j==a.size()-1){
                    
                    return i;
                }

                }
            }

    }
    return -1;
}

int main() {
    // debugmode();
    string x,a,b;
    getline(cin, x);
    getline(cin, a);
    getline(cin, b);

    int f1 = finder(x, a);
    if(f1==-1){
        std::cout<<x;
        return 0;
    }

    string ret;
    for(int i=0; i<x.size(); i++){
        if(f1==i){
            i+=a.size()-1;
        }

        else ret+=x[i];
    }
    std::cout<<ret;

    return 0 ;
}