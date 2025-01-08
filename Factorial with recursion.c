#include<stdio.h>

int fact(int i){
    if(i==0||i==1){
    return 1;    
    }
    return i*fact(i-1);
}
int main(){
    int n=3;
    for(int i=1;i<=n;i++){
        printf("%d,",fact(i));
    }
}
