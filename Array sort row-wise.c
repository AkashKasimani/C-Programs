#include<stdio.h>

void sort(int matrix[],int col){
    int temp;
    for(int i=0;i<col-1;i++){
        for(int j=i+1;j<col;j++){
            if(matrix[i]>matrix[j]){
                temp=matrix[i];
                matrix[i]=matrix[j];
                matrix[j]=temp;
            }
        }
    }
}
int main(){
    int row=3;
    int col=4;
    int matrix[3][4]={
        {8,6,1,4},
        {1,7,3,9},
        {8,3,7,2}
    };
    
    for(int i=0;i<row;i++){
        sort(matrix[i],col);
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("%d",matrix[i][j]);
        }
        printf("\n");
    }
    }

