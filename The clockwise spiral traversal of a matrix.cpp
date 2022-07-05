#include <bits/stdc++.h>

#define ll long long
#define ull double long
void nothing(){}

inline void outMatrix(int** matrix, int m, int n){
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            std::cout<< matrix[i][j]<<" ";
        }
        std::cout<< "\n";
    }
}

inline void inMatrix(int** matrix, int m, int n){
    for(int i=0; i<m; i++){
        matrix[i] = new int[n];
        for(int j=0; j<n; j++){
            std::cin>> matrix[i][j];
        }
    }
}
inline void delMatrix(int** matrix, int m){
     for(int i=0; i<m; i++){
      delete[] matrix[i]; 
     }
     delete[] matrix;
}
    //Took help from my codingninja instructor.
void binding(int** matrix, int m, int n){
    int r=0, c=0;
    while(r<m && c<n){

        for(int i=c; i<n; i++)
            std::cout<< matrix[r][i]<<' ';
        r++;
        for(int i=r; i<m; i++)
            std::cout<< matrix[i][n-1]<<' ';
        n--;
        if(r<m){
            for(int i=n-1; i>=c; i--)
                std::cout<< matrix[m-1][i]<<' ';
        m--;
        }
        if(c<n){
            for(int i=m-1; i>=r; i--){
                std::cout<< matrix[i][c]<<' ';
            }
            c++;
        }


    }
}
int main() {

    int m,n;
    std::cin>>m>>n;
    int**  matrix = new int* [m];
    
    inMatrix(matrix, m, n);
    
    binding(matrix, m, n);

    delMatrix(matrix, m);

}