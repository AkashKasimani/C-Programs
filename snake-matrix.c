#include<stdio.h>
#define M 4
#define N 4
int main(){
    int mat[M][N]={0};
    for(int i=0;i<M;i++){
        for(int j=0;j<N;j++){
                scanf("%d",&mat[M][N]);
        }
    }
    for(int i=0;i<M;i++){
        if(i%2==0){
            for(int j=0;j<N;j++){
                printf("%d,",mat[i][j]);
            }
            printf("\n");
        }
        else{
            for(int j=N-1;j>=0;j--){
                printf("%d,",mat[i][j]);
            }
            printf("\n");
        }
    }
}
