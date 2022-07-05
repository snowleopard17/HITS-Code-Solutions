#include <iostream>
using namespace std;

int main()
{
    int x,y;
    cin >>x>>y;
    x=x-y;
    y=x+y;
    x=(y-x);
    cout << x<<" "<<y;

    return 0;
}
