#include <bits/stdc++.h>

#define ll long long
#define ull double long
void nothing(){}


int main() {

    std::string a;
    std::cin>> a;
    double x=0;


    for(int i=0; i<a.size(); i++){
        bool mult = false,divi=false, plus=false, minu=false,deci=false;
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
        else if(a[i]==46){
            deci = true;
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
        i--;
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
        else if(deci){
            if(x>0)x+=t/pow(10,j);
            else x-=t/pow(10,j);
        }
        else x+=t;
    }
    std::cout<< x;

}