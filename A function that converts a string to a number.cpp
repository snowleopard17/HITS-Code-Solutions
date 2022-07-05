#include <bits/stdc++.h>


int deg(std::string x, std::string y){
  int b=0;
  int t=0;
  for(int i:x){
    t++;
    b+=(i-48)*std::pow(10, x.size()-t);
  }
  return b;
}

int main() {

  std::string x,y;
  std::getline(std::cin, x);
  std::cout << deg(x,y);

}