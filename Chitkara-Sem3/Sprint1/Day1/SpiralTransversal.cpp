#include <iostream>
using namespace std;

int main(){
  int T;
  cin >> T;
  cin.ignore();
  
  while (T--){
    int N, M;
    cin >> N >> M;
    cin.ignore();
    
    int matrix[N][M];
    for (int i=0; i<N; i++){
      for (int j=0; j<M; j++){
        cin >> matrix[i][j];
      }
    }
    
    int top = 0, bottom = N - 1;
    int left = 0, right = M - 1;

    while (left <= right && top<=bottom){
      // top --> bottom on left col
      for (int i=top; i<=bottom; i++){
        cout << matrix[i][left] << " ";
      }
      left++;
      
      if (top <= bottom){
        // left --> right on bottom row
        for (int j=left; j<=right; j++){
          cout << matrix[bottom][j] << " ";
        }
        bottom--;
      }
      
      if (left <= right){
        // bottom --> top on right col
        for (int i=bottom; i>=top; i--){
          cout << matrix[i][right] << " ";
        }
        right--;
      }
      
      if (top <= bottom){
        //right --> left on top row
        for (int j=right; j>=left; j--){
          cout << matrix[top][j] << " ";
        }
        top++;
      }
      
      
    }
    cout << endl;
    
  }
}