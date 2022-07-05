#include <bits/stdc++.h>

using namespace std;



int main() {

    int a,r=0;
    std::cin>> a;
    string q;
    string* x = new string[a];
    bool fnd = false;

    for(int i=0; i<a; i++){
        fnd = false;
        std::cin>> q;
        for(int j=0; j<r; j++){
            if(x[j]==q){
                fnd = true;
                break;
            }

        }
        if(!fnd){
            x[r]=q;
            r++;
        }

        
    }

    for(int i=0; i<r; i++){
        std::cout<< x[i]<< ' ';
    }


}