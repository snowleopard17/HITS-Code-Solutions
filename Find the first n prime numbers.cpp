#include <bits/stdc++.h>

void nothing(){}

int myrt(double x){
	double y=x;
	double xhalf = 0.5;
	x=(x+(y/x))*0.5;
	x=(x+(y/x))*0.5;
	x=(x+(y/x))*0.5;
	return (int)x;
}
bool isprime1(int x){
	int xsqrt = myrt(x);
	if(x<2)return false;
	for(int i=2; i<=xsqrt; i++){
		if(x%i==0)return false;
	}
	return true;
}
bool isprime2(int x){
	int n=x;
	if(x<2)return false;
	if(x==2)return true;
	for(int i=2; i<=n; i++){
		if(x%i==0)return false;
		else n=x/i;
	}
	return true;
}

void mainpoint() {
	
	int x;
	std::cin>>x;
	int count=0;
	for(int i=2; count<x; i++){
		if(isprime2(i)){
			std::cout<<i<<" ";
			count++;
		}
		else nothing();
	}
}

int main(){
    mainpoint();
    
}
