#include <bits/stdc++.h>

#define ll long long
#define ull double long
void nothing(){}



int main() {
    std::string a;
    std::getline(std::cin, a);

    for(int i= a.size()-1; i>=0; i--){
        std::cout<<a[i];
    }
}