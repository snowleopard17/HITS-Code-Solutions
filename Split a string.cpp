#include <bits/stdc++.h>

#define ll long long
#define ull double long
void nothing(){}





int main() {
    std::string a;
    int x;

    std::getline(std::cin, a);
    std::cin>>x;

    char* c = new char[x];
    char* d = new char[a.size()-x];
    c = &a[0];
    d = &a[x];
    for(int i=0; i<x; i++){
        std::cout<< c[i];
    }
    std::cout<< '\n';
    for(int i=x; i<a.size(); i++){
        std::cout<< c[i];
    }

}