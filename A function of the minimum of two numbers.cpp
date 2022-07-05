#include <iostream>
using namespace std;

int low(int a, int b){

  return (a<b)*a+(b<=a)*b;

}
int main() {

  int a, b;
  cin>> a>> b;
  cout<< low(a, b);
  return 0;
}