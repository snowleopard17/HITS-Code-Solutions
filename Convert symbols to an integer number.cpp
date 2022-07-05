#include <bits/stdc++.h>

#define ll long long
#define ull double long
void nothing(){}


int main() {

    std::string a;
    std::cin>> a;
    int x=0;


    for(int i=0; i<a.size(); i++){
        bool mult = false,divi=false, plus=false, minu=false;
        if(a[i]==43){
            plus=true;
            i++;
        }
        else if(a[i]==45){
            minu=true;
            i++;
        }
        else if(a[i]==42){
            mult=true;
            i++;
        }
        else if(a[i]==47){
            divi=true;
            i++;
        }
        int j=0,h=0,t=0;
        while(a[i]>47&&a[i]<58){
            i++;
            j++;
        }
        i-=j;
        while(a[i]>47&&a[i]<58){
            t += (a[i]-48)*pow(10,j-h-1);
            h++;
            i++;
        }
        if(plus){
            x+=t;
        }
        else if(minu){
            x-=t;
        }
        else if(mult){
            x*=t;
        }
        else if(divi){
            x/=t;
        }
        else x+=t;


    }
    std::cout<< x;

}