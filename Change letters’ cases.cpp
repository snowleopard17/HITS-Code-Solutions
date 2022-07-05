#include <bits/stdc++.h>

#define ll long long
#define ull double long
void nothing(){}


std::string switchCase(std::string a){
    std::string ret; 
    
    for(int i=0; i<a.size(); i++){

        if(a[i]>96&&a[i]<123)
            ret+=a[i]-32;
            
        else ret+=a[i]+32;
    }


    return ret; 
}

int main() {
    std::string a;
    char b;
    std::getline(std::cin, a);
    a = switchCase(a);
    std::cout<< a;

}