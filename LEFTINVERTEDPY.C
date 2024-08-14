#include<stdio.h>
#include<conio.h>
void main(){
int i,j,r;
printf("Enter R :");
scanf("%d",&r);
for(i=r;i>=0;i--){
for(j=i;j>=0;j--){
printf("*");
}
printf("\n");
}
getch();
}