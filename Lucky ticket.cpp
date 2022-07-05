#include <stdio.h>
int main() {
    int n;
    int a[6];
    scanf("%1d%1d%1d%1d%1d%1d",&a[0],&a[1],&a[2],&a[3],&a[4],&a[5]);
    int q=0,r=0;
    for(int i=0;i<6;i++){
        if(i<3)q+=a[i];
        else r+=a[i];
    }
    (q==r)?printf("%d",1 ):printf("%d",0 );;
    
}