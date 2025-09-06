#include <iostream>

using namespace std;

int main(){
    int row=4, col=4;
    int **matrix;

    matrix = (int**)malloc(row*sizeof(int));

    for(int i=0; i<row; i++){

        matrix[i] = (int*)malloc(col*sizeof(int));
    }
    // int matrix[row][col];
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            matrix[i][j]=i+j;
        }
    }

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    for (int i = 0; i < row; i++) {
        free(matrix[i]);
    }
    free(matrix);
    return 0;
}