#include <bits/stdc++.h>


void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
void outarray(int* x, int n){
    for(int i=0; i<n; i++){
        std::cout << x[i]<<"";
    }

}


int main() {
    int n,r;
    std::cin>> n>> r;
    if(n<r){
        
    }
    int* x=new int[n];
    int* y=new int[r];

    for(int i=0; i<n; i++)
        std::cin>>x[i];
    for(int i=0; i<r; i++)
        std::cin>>y[i];

    if(n<r){
        int* temp = new int[r];
        swap(&n, &r);
        temp = x;
        x = new int[n];
        x=y;
        y=temp;

    }

    for(int i=n-1,j=r-1; i>=0&&j>=0; i--,j--){
        if(i==0&&x[0]+y[0]>=10)std::cout<<1;
        if(x[i]+y[j]<10){
            x[i]+=y[j];
        }

        else {

            x[i-1]++;
            x[i]=(x[i]+y[j])-10;
        }
    }
    outarray(x, n);

}