#include <bits/stdc++.h>

#define ll long long
#define ull double long
void nothing(){}

int main() {

  std::string a;
  std::string x;
  int c;
  std::cin>>c;
  std::getline (std::cin, a);
  for(int i=0; i<c; i++) {
    std::getline (std::cin, a);
    x+=a;
  }
  std::cout<< x;


}