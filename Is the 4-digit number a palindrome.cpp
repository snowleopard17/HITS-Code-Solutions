#include <iostream>
int main() {
	int a;std::cin>>a;int x=a/100;int temp=a/10;temp*=10;int y=a-temp;temp=a/100;temp*=100;temp=a-temp;temp=temp/10;y*=10;y+=temp;(x==y)?std::cout<<1:std::cout<<0;

}