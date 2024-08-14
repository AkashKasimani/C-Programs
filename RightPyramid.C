#include<stdio.h>
#include<conio.h>
void main(){
int i,j,k,r;
printf("Enter Rows: ");
scanf("%d",&r);
for(i=0;i<=r;i++){
for(j=i;j<=r;j++){
printf(" ");
}
for(k=0;k<=i;k++){
printf("*");
}
printf("\n");
}
getch();
}
