#include<stdio.h>
#include<string.h>

int main()
{
    int arr[10]={1, 3, 125, 5, 5, 5, 67, 123, 125};
   int k;
   printf("Enter element to find position :");
   scanf("%d",&k);
   
   int first=-1,last=-1;
   int len=sizeof(arr)/sizeof(arr[0]);
   for(int i=0;i<=len;i++){
       if(arr[i]==k){
       first=i;
       break;
   }}
   for(int j=len-1;j>=0;j--){
       if(arr[j]==k){
       last=j;
       break;
   }}
   
   printf("First position : %d\nLast position : %d",first,last);
   
}
