#include<stdio.h>
void main(){
int i,j,r;
printf("Enter R :");
scanf("%d",&r);
for(i=r-1;i>=0;i--){
for(j=i;j<r;j++){
printf(" ");
}
for(int k=i;k>=0;k--){
    printf(" =");
}
printf("\n");
}
}
