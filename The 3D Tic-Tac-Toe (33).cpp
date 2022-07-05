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

inline void sixeyes(int*** matrix, int*** lay){
    for(int i=0; i<9; i++){//just Creating
        lay[i] = new int* [3];
        for(int j=0; j<3; j++){
            lay[i][j] = new int[3];
        }
    }
    for(int k=0; k<3; k++){
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){//base and past
            lay[k][i][j] = matrix[k][i][j];
            }
        }
    }
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
        lay[3][i][j] = matrix[i][0][j];//top   
        lay[4][i][j] = matrix[i][2][j];//bottom
        lay[5][i][j] = matrix[i][j][0];//right
        lay[6][i][j] = matrix[i][j][2];//left
        lay[7][i][j] = matrix[i][j][1];//Longitudinal
        lay[8][i][j] = matrix[i][1][j];//Lateral
        }
    }

}
int diag3(int*** matrix){
    int count=0;
    if(matrix[0][0][0]==matrix[1][1][1] &&
       matrix[1][1][1]==matrix[2][2][2] &&
       matrix[1][1][1])count++;
    
    if(matrix[0][2][2]==matrix[1][1][1] &&
       matrix[1][1][1]==matrix[2][0][0] &&
       matrix[1][1][1])count++;
    
    if(matrix[0][0][2]==matrix[1][1][1] &&
       matrix[1][1][1]==matrix[2][2][0] &&
       matrix[1][1][1])count++;

    if(matrix[0][2][0]==matrix[1][1][1] &&
       matrix[1][1][1]==matrix[2][0][2] &&
       matrix[1][1][1])count++;

    return count;

} 
int colmn(int** lay){
    int z=0;
    for(int i=0; i<3; i++){
        if( 
            lay[i][0]==lay[i][1] &&
            lay[i][1]==lay[i][2] &&
            lay[i][1]
            )z++;
    }

    return z;
}
int rown(int** lay){
    int z=0;
    for(int i=0; i<3; i++){
        if( 
            lay[0][i]==lay[1][i] &&
            lay[1][i]==lay[2][i] &&
            lay[0][i]
            )z++;
    }


    return z;
}
int diag2(int** lay){
    int z=0;
    if(
        lay[0][0]==lay[1][1] &&
        lay[1][1]==lay[2][2] &&
        lay[1][1]
        )z++;
    if(
        lay[0][2]==lay[1][1] &&
        lay[1][1]==lay[2][0] &&
        lay[1][1]
        )z++;

    return z;
}
int main() {

    int m,n;
    m = 3;
    int***  matrix = new int** [m];

    for(int k=0; k<3; k++){
        matrix[k] = new int* [m];
        for(int i=0; i<m; i++){
            matrix[k][i] = new int[m];
            for(int j=0; j<m; j++){
                std::cin>> matrix[k][i][j];
            }
        }
    }
    int*** lay = new int** [9];
    sixeyes(matrix, lay);
    int count = 0;
    count += diag3(matrix);

    int divc=0;
    for(int i=0; i<9; i++){
        divc+=colmn(lay[i]);
        divc+=rown(lay[i]);
        count+=diag2(lay[i]);
    }
    count += divc/2;
    std::cout<< count;

//deleting, don't know why
    for(int i=0; i<3; i++)
        delMatrix(matrix[i], m);
    for(int i=0; i<6; i++)
        delMatrix(lay[i], m);
}