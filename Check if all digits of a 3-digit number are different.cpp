#include <bits/stdc++.h>

void nothing(){}


void mainpoint() {//MAIN FUNCTION
    int a; scanf("%d", &a); 
    int n[3];
    //BITWISE ARE FASTER
    
    for(int i=1,j=0; i<=100&&j<3;i=i*10,j++)
    //LOOP OF 2 variables i to reduce.
    //the 10th places and j to to iterates.
        n[j]=a/i%10;//stores 3 variables separately.
    
    
    
    (n[0]!=n[1]&&n[1]!=n[2]&&n[0]!=n[2])?printf("%d",1):printf("%d",0);
    //Conditional Operator with 3 conditons.
}

    

int main(){//IGNORE

    mainpoint();
}