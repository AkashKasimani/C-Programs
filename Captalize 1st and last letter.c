#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char arr[100]={"hello vanakam pa"};
    int count;
    int len=strlen(arr);
    printf("%d",len);
    for(int i=0;i<len;i++){
        if(i==0 || i==len-1){
            arr[i]=toupper(arr[i]);
        }
        else if(arr[i]==' '){
            arr[i-1]=toupper(arr[i-1]);
            arr[i+1]=toupper(arr[i+1]);
        }
    }
    printf("%s",arr);

}
