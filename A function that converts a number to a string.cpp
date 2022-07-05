#include <bits/stdc++.h>


std::string deg(int x){
  std::string a;
  std::string b;
  bool neg=false;
  if(x<0){
    neg=true;
    x=-x;
  }
  do{
    b = (x%10)+48;
    b+=a;
    a = b;
  }
  while(x/=10);
  if(neg){
    b='-';
    b+=a;
    a=b;
  }
  return b;
}

int main() {

  int x;
  std::cin>>x;
  std::cout << deg(x);

}