#include<stdio.h>
int main(){
    int arr[]={10,20,30,40,50};
    int len=sizeof(arr)/sizeof(arr[0]);
    int result[len];
    int count=0;

    int last=arr[len-1];
    printf("%d\n",last);
    result[count++]=last;
    
    for(int i=len-2;i>=0;i--){
        if(arr[i]>last){
            last=arr[i];
            result[count++]=arr[i];
        }
    }
  for(int i=count-1;i>=0;i--){
      printf("%d,",result[i]);
  }
}
