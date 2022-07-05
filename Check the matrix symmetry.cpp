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

bool Hsymt(int** matrix, int m, int n){
    bool hsym = false;
        for(int i=0; i<m/2; i++){
        for(int j=0; j<n; j++){
            if(matrix[i][j]==matrix[m-i-1][j])hsym = true;
            else {
                hsym=false;
                return hsym;
            }
        }
    }
    return hsym;
}

bool Vsymt(int** matrix, int m, int n){
    bool vsym = false;
    for(int j=0; j<n/2; j++){
        for(int i=0; i<m; i++){
            if(matrix[i][j]==matrix[i][n-j-1])vsym=true;
            else {
                vsym = false;
                return vsym;
            }
        }
    }
    return vsym;
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

    inMatrix(matrix, m, n);

    bool hsym = Hsymt(matrix, m, n);
    bool vsym = Vsymt(matrix, m, n);
    (vsym|hsym)?std::cout<<"Yes":std::cout<<"No";    
    
    delMatrix(matrix, m);

}
