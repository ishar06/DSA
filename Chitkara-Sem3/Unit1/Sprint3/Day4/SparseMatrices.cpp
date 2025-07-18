#include <iostream>
#include <vector>
using namespace std;

// --------------------------------------------------------------------------------------

/*

void convertToCOO(int sparse[4][5], int row, int col){
    int nonZero = 0;
    for (int i=0; i<row; i++){
        for (int j=0; j<col; j++){
            if (sparse[i][j]!=0){
                nonZero++;
            }
        }
    }
    if (nonZero==0){
        cout << "Not a Sparse Matrix" << endl;
        return;
    }

    int COO_matrix[nonZero][3];
    int r = 0; // Row
    for (int i=0; i<row; i++){
        for (int j=0; j<col; j++){
            if (sparse[i][j]!=0){
                COO_matrix[r][0] = i;
                COO_matrix[r][1] = j;
                COO_matrix[r][2] = sparse[i][j];
                r++;
            }
        }
    }

    // Printing elements from COO
    cout << "ROW | COLUMN | VALUE " << endl;
    for (int i=0; i<nonZero; i++){
        for (int j=0; j<3; j++){
            cout << COO_matrix[i][j] << " | ";
        }
        cout << endl;
    }    
}

int main(){
    int sparseMatrix[4][5] = {
       {0,0,3,0,4},
       {0,0,5,7,0},
       {0,0,0,0,0},
       {0,2,6,0,0}
    };
    convertToCOO(sparseMatrix, 4, 5);
}

*/
// --------------------------------------------------------------------------------------

/*
void convertToCSR(vector<vector<int>> sparse, int row, int col){
    int nonZero = 0;
    for (int i=0; i<row; i++){
        for (int j=0; j<col; j++){
            if (sparse[i][j]!=0){
                nonZero++;
            }
        }
    }
    if (nonZero == 0){
        cout << "Not a Sparse Matrix " << endl;
        return;
    }
    vector <int> values;
    vector <int> colIndex;
    vector <int> rowPtr;

    

}

int main(){
    vector<vector<int>> sparseMatrix = {
        {0,0,3,0,4},
        {0,0,5,7,0},
        {0,0,0,0,0},
        {0,2,6,0,0}
    };
    convertToCSR(sparseMatrix,4,5);
}

*/
// --------------------------------------------------------------------------------------

