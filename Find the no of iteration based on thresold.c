#include<stdio.h>
#include<string.h>

int main()
{
    int arr[10]={5, 8, 10, 13, 6, 2};
    int thresold=3;
    int tc=0;
    int len= sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<len;i++){
        int num= arr[i];
        int count=0;
        while(num>0){
            if(num>=thresold){
                num-=thresold;
                
            }else{
            num=0;
            }
            count++;
        }
        tc+=count;
        
    }
    printf("total iteration is : %d",tc);
}
