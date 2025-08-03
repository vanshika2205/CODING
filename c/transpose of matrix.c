#include<stdio.h>
void main(){

int rows,columns;

printf("enter number of rows and columns:");
scanf("%d %d",&rows,&columns);

int matrix[rows][columns];

for(int i=0;i<rows;i++){
    for(int j=0;j<columns;j++){
        printf("enter element at row %d and column %d :",i+1,j+1);
        scanf("%d",&matrix[i][j]);
    }
}
  printf("\n");
  for(int i=0;i<rows;i++){
    for(int j=0;j<columns;j++){
        printf("%d",matrix[i][j]);
    }
    printf("\n");
    
  }

}