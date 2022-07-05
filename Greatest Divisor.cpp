#include <bits/stdc++.h>

//GO TO HELL ONCE AGAIN

void nothing(){}

int divisor(int x,int a){
	float exa=x%a;
	if(exa==0)return a; 
	else {
		a--;
		return divisor(x,a);
	}
}

void mainpoint() {
	double x,a;
	std::cin>>x;
	a = x/2;

	std::cout<<divisor(x,a);
}

int main(){
    mainpoint();
    
}