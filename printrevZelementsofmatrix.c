#include<stdio.h> 
void main(){ 
    int matrix[10][10],i,j,n; 
    printf("Enter N : "); 
    scanf("%d",&n); 
    printf("Enter element : "); 
    for(i=0;i<n;i++){ 
        for(j=0;j<n;j++){ 
            scanf("%d",&matrix[i][j]);
            } 
    } 
    for(i=0;i<n;i++){ 
        if(i==0){
            for(j=n-1;j>=0;j--){ 
                printf("%d ",matrix[i][j]); 
            } 
        } 
        else if(i==n-1){ 
            for(j=n-1;j>=0;j--){ 
                printf("%d ",matrix[i][j]);
                }
                }
                else{ 
                    printf("%d ",matrix[i][j]);
                } } }
