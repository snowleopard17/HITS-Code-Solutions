#include <stdio.h>
int main(){int h,m;scanf("%d %d",&h,&m);h=h*5*6;if(h==360)h=0;m=m*6;int r=0;(h>m)?r=h-m:r=m-h;(r>180)?printf("%d",360-r):printf("%d",r);}