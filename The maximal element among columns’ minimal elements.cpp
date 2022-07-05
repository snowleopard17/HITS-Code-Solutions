#include <bits/stdc++.h>
using namespace std;

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
    cin>> m>>n;
    int** matrix = new int* [m];
    int* clm = new int [n];
    inMatrix(matrix, m, n);
    for(int i=0; i<n; i++){
        int least = 2147483647;
        for(int j=0; j<m; j++){
            least = std::min(least, matrix[j][i]);
        }
        clm[i] = least;
    }
    int biggest = -2147483647;
    for(int i=0; i<n; i++){
        biggest = std::max(clm[i], biggest);
    }
    std::cout<<biggest;

    delMatrix(matrix, m);

}