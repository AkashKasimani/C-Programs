#include<stdio.h>
int main(){
    int n,reverse=0,remainder,real;
    n=12321;
    real=n;
    while(n!=0){
        remainder=n%10;
        reverse=reverse*10+remainder;
        n=n/10;
    }
    if(real== reverse){
        printf("%d is Palindrome !",real);
    }
    else{
        printf("%d is Not a palindrome !",real);
    }
}
