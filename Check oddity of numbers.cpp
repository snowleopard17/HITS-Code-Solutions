#include <stdio.h>
int main(){int a,b;scanf("%d%d",&a,&b);a=a%2;b=b%2;(a^b)?printf("%d",1):printf("%d",0);}