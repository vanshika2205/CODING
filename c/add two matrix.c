#include<stdio.h>
void main(){
    int rows1,columns1;
printf("enter the number of rows and columns of 1st matrix:");
scanf("%d %d",&rows1,&columns1);

int matrix1[rows1][columns1];
for(int i=0;i<rows1;i++){
    for(int j=0;j<columns1;j++){
        printf("enter element at row %d and column %d :",i+1,j+1);
        scanf("%d",&matrix1[i][j]);

    }
}
     int row2,column2;
     printf("enter number of rows and column of 2nd matrix :");
     scanf("%d %d",&row2,column2);

     int matrix2[row2][column2];

     for(int i=0;i<row2;i++){
        for(int j=0;j<column2;j++){
            printf("enter element at row %d and column %d :",i+1,j+1);
            scanf("%d",&matrix2[i][j]);
        }
     }

     for(int i=0;i<rows1;i++){
        for(int j=0;j<columns1;j++){
            printf("%d",matrix1[i][j]);
        }
        printf("\n");
    }
             printf("\n");

             for(int i=0;i<row2;i++){
            for(int j=0;j<column2;j++){
                printf("%d",matrix2[i][j]);
        }
        printf("\n");
     }
         printf("\n");

         
     for(int i=0;i<rows1;i++){
        for(int j=0;j<columns1;j++){
            printf("%d",matrix1[i][j]+matrix2[i][j]);
        }
        printf("\n");
    }
}
