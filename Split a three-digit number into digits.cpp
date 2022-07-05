#include <iostream>
using namespace std;

int main(){
    int x,y=0;
    cin>>x;
    cout << (int)x/100-y<<" ";
    y=((int)x/100)*10;
    cout << ((int)x/10)-y<<" ";
    y=((int)x/10)*10;
    cout << (int)x-y;

}