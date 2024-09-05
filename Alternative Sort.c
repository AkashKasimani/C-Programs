#include<stdio.h>
#include<string.h>
int alter(int arr[],int n){ 
    int i=0,j=n-1;
    while(i<j){
         printf("%d,%d,",arr[j--],arr[i++]);
    }
    if(n%2!=0){
         printf("%d,",arr[i]);
    }
}
int main(){
    int arr[]={1,2,3,4,5,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
     alter(arr,n);
    return 0;
}
