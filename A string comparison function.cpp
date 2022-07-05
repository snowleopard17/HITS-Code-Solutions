#include <bits/stdc++.h>


bool deg(std::string x, std::string y){

  if(x.size()!=y.size())
    return false;
  
  for(int i=0; i<x.size(); i++)
    if(x[i]!=y[i])
      return false;
  
  return true;
}

int main() {

  std::string x,y;
  std::getline(std::cin, x);
  std::getline(std::cin, y);
  std::cout << deg(x,y);

}