#include <bits/stdc++.h>


int deg(int x, int y){
  int b=1;
  while(y--){
    b*=x;
  }
  return b;
}

int main() {

  int x,y;
  std::cin >> x>>y;
  std::cout << deg(x,y);

}