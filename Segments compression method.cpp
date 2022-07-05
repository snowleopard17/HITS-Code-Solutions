#include <bits/stdc++.h>
using namespace std;
#define ld double long

//cheated from gfg

class Bus{
  public:  
  int C;
  int R;
  Bus(int a, int b){
    if(a<b){
      C = a;
      R = b;
    }
    else { 
      C = b;
      R = a;  
    }
  }
  
};

int traf(Bus F, Bus S){
  if(F.C>S.C){
    std::swap(F, S);
  }
  if(S.R<F.R){
    return (S.R-S.C)+1;
  }
  if(F.R>S.C){
    return (F.R-S.C)+1;
  }

  return 0;
}

int main()
{
    int a, b;
    cin >> a >> b;
    Bus first(a, b);
    cin >> a >> b;
    Bus second(a, b);
    cout <<traf(first, second);
}