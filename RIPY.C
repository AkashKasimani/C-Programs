#include<stdio.h>
#include<conio.h>
void main(){
int i,j,k,r;
printf("Enter R:");
scanf("%d",&r);
for(i=r-1;i>=0;i--){
for(j=i;j>=0;j--){
printf(" ");
}
for(k=i;k>=0;k--){
printf("*");
}
printf("\n");
}
getch();
}