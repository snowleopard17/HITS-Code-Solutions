#include <bits/stdc++.h>

#define ll long long
#define ull double long
void nothing(){}


int finder(std::string a, char b){
    for(char x:a)
        if(x==b)return 1;
    
    return 0;
}

int main() {
    std::string a;
    char b;
    std::getline(std::cin, a);
    std::cin >>b;
    std::cout<< finder(a,b);


}