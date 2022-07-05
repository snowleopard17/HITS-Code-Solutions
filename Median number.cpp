#include <bits/stdc++.h> 
int main(){int a,b,c;std::cin >> a>>b>>c;((b>a&&b<c)||(b<a&&b>c))?std::cout<<b:((a>c&&a<b)^(a<c&&a>b))?std::cout<<a:std::cout <<c;}
