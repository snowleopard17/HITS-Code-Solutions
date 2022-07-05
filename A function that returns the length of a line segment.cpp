#include <bits/stdc++.h>


int deg(int x, int y){
  if(x<y)return y-x;
  return x-y;
}

int main() {

  int x,y;
  std::cin >> x>>y;
  std::cout << deg(x,y);

}