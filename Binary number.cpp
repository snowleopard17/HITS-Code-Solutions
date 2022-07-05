#include <iostream>
using namespace std;

int main(){
    int x;
    cin>>x;
    bool pri=false;
    if(x==0)cout<<0;
    for(int i=64; i>0; i=i/2){
        if(x>=i){
            cout<<1;
            x=x-i;
            pri=true;
        }
        else if(pri)cout<<0;
        
    } 
    
    
    
}