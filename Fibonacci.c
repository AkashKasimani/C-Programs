#include<stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int a=0, b=1, c;
    printf(" Fibo : %d,%d,",a,b);
    for(int i=2;i<n;i++){
       c=a+b;
        printf("%d,",c);
        a=b;
        b=c;
    }
}
