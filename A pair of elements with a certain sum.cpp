#include <bits/stdc++.h>

#define ll long long
#define ull double long
void nothing(){}
// inline void debug();

void swap(int& x, int& y){
    int temp=x;
    x=y;
    y=temp;
}

int main() {
    // debug(); //IGNORE THIS 

    int n=0,r,s;

    std::cin>>r>>s;


    int* x = new int[r];
    for(int i=0; i<r; i++)
        std::cin>>x[i];

    for(int i=0; i<r; i++)
        for(int j=0; j<r; j++)
            if(x[i]+x[j]==s&&i!=j){
                std::cout<<i+1<<" "<<j+1;
                return 0;
            }
     std::cout<<-1;

    // for(int i=0; i<r; i++)std::cout<< x[i]<<" ";

}