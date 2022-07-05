#include <bits/stdc++.h>
using namespace std;

void monotonic(){
    int a,b,c,d;

    cin>> a>> b>> c>> d;
    

    double rx=1000, lx = -1000, y = 0.000001, ry,ly;
    ry = a*pow(rx,3)+b*pow(rx,2)+c*(rx)+d;
    ly = a*pow(lx,3)+b*pow(lx,2)+c*(lx)+d;
    if(ry<ly)
    {
      swap(lx, rx);
    }
    long double w;
    while(y!=0)
    {
      w = (rx+lx)/2;
      y = a*pow(w,3)+b*pow(w,2)+c*(w)+d;
      if(y>0)
        rx = w;
      else lx = w;

    }
    std::cout<< std::fixed;
    std::cout<< std::setprecision(6)<<w;

}

int main() {
  monotonic();

  return 0;

}