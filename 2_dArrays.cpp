#include<iostream>
#include<vector>
#include <algorithm> 
using namespace std;
void print(vector<vector<int>> matrix){
     for(int i = 0; i<matrix.size(); i++){
     for(int j = 0; j<matrix[0].size(); j++){
        cout<<matrix[i][j]<<" ";

     }
     cout<<endl;
  }
}
void rotateByNinetyDeg(vector<vector<int>> &matrix){
// swap i and j for transpose
 for(int i = 0; i<matrix.size(); i++){
     for(int j = 0; j<=i; j++){

        swap(matrix[i][j], matrix[j][i]);
     }
  }
  // column swap;

 for(int i = 0; i<matrix.size(); i++){
    reverse(matrix[i].begin(), matrix[i].end());
 }


}

int main(){
   vector<vector<int>> matrix;

   matrix ={{1,2,3,4},
            {4,5,6,7},
            {7,8,9,0},
            {0,1,2,3}};

                
// rotate by 90 deg
print(matrix);
cout<<endl;
rotateByNinetyDeg(matrix);

print(matrix);

}