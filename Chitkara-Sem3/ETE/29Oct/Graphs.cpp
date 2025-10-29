#include <iostream>
#include <vector>
using namespace std;

void createEdge(vector<vector<int>>& matrix, int source, int destination, int weight) {
    matrix[source][destination] = weight; // For directed graph
    matrix[destination][source] = 1; // For undirected graph
    return;
}

void display(vector<vector<int>>& matrix) {
    int V = matrix.size();
    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int V = 5; 

    vector<vector<int>> matrix(V, vector<int>(V, 0));

    createEdge(matrix, 0, 1, 10);
    createEdge(matrix, 0, 4, 20);
    createEdge(matrix, 1, 2, 30);
    createEdge(matrix, 1, 3, 40);
    createEdge(matrix, 3, 4, 25);

    cout << "Adjacency Matrix:" << endl;
    display(matrix);

    return 0;
}
