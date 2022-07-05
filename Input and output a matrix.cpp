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

int main() {

    int m,n;
    std::cin>> m>>n;
    int**  matrix = new int* [m];

    inMatrix(matrix , m, n);
    outMatrix(matrix, m, n);

    delMatrix(matrix, m);


}