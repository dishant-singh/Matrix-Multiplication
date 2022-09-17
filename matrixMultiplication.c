#include<stdio.h>
#include<stdlib.h>

int main(){
  int a[2][2],b[2][2],t[2][2];
  int i,j;

  //creating matrix a[i][j];
  
  printf("Enter matrix A: \n\n");
  for(i = 0; i < 2; i++){
    for(j = 0; j < 2; j++){
      printf("Enter the element [%d][%d] in matrix A : ", i,j);
      scanf("%d", &a[i][j]);
    }
  }

  //printing matrix a[i][j]:-
  
  printf("\nMatrix A[i][j]:\n");
  for(i = 0; i < 2; i++){
    for(j = 0; j < 2; j++){
      printf(" %4d", a[i][j]);
    }
    printf("\n\n");
  }

  //creating matrix b[i][j];
  
  printf("Enter matrix B: \n\n");
  for (i = 0; i < 2; i++){
    for(j = 0; j < 2; j++){
      printf("Enter the element [%d][%d] in matrix B: ", i, j);
      scanf("%d", &b[i][j]);
    }
  }

  //printing matrix b[i][j];
  
  printf("\nMatrix B[i][j]:\n");
  for(i = 0; i < 2; i++){
    for(j = 0; j < 2; j++){
      printf(" %4d", b[i][j]);
    }
    printf("\n\n");
  }

  //Matrix Multiplication => rslt[i][j] = mat1[i][k] * mat2[k][j];
  
  printf("Multiplication of matrix: A[i][j] and B[i][j]: \n RESULT: \n");
  for(i = 0; i < 2; i++){
    for(j = 0; j < 2; j++){
    t[i][j] = 0;
    for(int k = 0; k < 2; k++){
      t[i][j] += a[i][k] * b[k][j];
    }
    printf(" %4d", t[i][j]);
    }
    printf("\n\n");
  }

}
