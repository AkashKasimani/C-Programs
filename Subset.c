#include<stdio.h>

int main(){
    int n,array[10],subArray[100][10],subSize[20];
    int x=0;

    printf("Enter N : ");
    scanf("%d",&n);
    
    for(int i=0;i<n;i++){
        printf("Enter Subset element : ");
        scanf("%d",&array[i]);
    }

    for(int i=1;i<(1<<n);i++){
        subSize[x]=0;
        for(int j=0;j<n;j++){
            if(i & (1<<j)){
                subArray[x][subSize[x]++]=array[j];
            }
        }
        x++;
    }

    for(int i=0;i<x;i++){
        for(int j=0;j<subSize[i];j++){
            printf("[%d]",subArray[i][j]);
        }
        printf("\n");
    }
    return 0;
}
