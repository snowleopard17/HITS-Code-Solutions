#include <bits/stdc++.h>
#include <iostream>
using namespace std;



void quad_solver(int a,int b,int c,int d=0){

	d=(b*b)-(4*a*c);

	if(d<0)cout<< 0;

	else if(a==0){

		if(b!=0&c!=0)cout<<1 <<" "<<(double)-c/b;
		else if(c==0&b!=0)cout<<1<<" "<< 0;
		else if(c!=0&b==0)cout<<0;
		else cout<<-1;
	}
	
	else if(d==0)cout <<1<<" "<< -b/(2*a);

	else {
	
		double r1=(-b+sqrt(d))/(2*a);
		double r2=(-b-sqrt(d))/(2*a);
		cout<< 2<<" "<<(r2<r1)*r2+(r1<r2)*r1<<" "<< (r2>r1)*r2+(r1>r2)*r1;
	
	}
}



int main() {



	int a,b,c;
	cin>>a>>b>>c;

	quad_solver(a,b,c);
	
}
