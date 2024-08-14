#include<stdio.h>
#include<conio.h>
void main(){
int i,j,r;
printf("Enter R: ");
scanf("%d",&r);
for(i=0;i<=r-1;i++){
for(j=0;j<=i;j++){
printf("*");
}
printf("\n");
}getch();
}
