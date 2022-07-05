#include <iostream>
using namespace std;
void nothing(){}
int sqr(int x){return x*x;}
int main() {
	int a[5],z=0;while(z<5){std::cin>>a[z];z++;}(sqr(a[3]-a[0])+sqr(a[4]-a[1])==sqr(a[2]))?std::cout<<1:std::cout<<0;

}