  for(int i = 0; i<matrix.size(); i++){
     for(int j = 0; j<matrix[0].size(); j++){
        if(j == matrix[0].size() - 1){
             swap(matrix[i][matrix[0].size() - 1], matrix[i][0]);
        }
     }
  }