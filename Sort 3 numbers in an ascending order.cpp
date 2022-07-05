#include <bits/stdc++.h>

void swop(int *x, int *y){
	*x=*x-*y;
	*y=*x+*y;
	*x=*y-*x;

}
void nothing(){}
void sort(int a[]){

	for(auto i=0; i<3;i++)for(auto j=i; j<3;j++){
		(a[i]>a[j])?swop(&a[i],&a[j]):nothing();
	}
}
int main() {

	int a[3],z=0;
	while(z<3){std::cin>>a[z];z++;}
	sort(a);
	for(auto i=0;i<3;i++)std::cout<<a[i]<<" ";



}