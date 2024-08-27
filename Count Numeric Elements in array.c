#include<stdio.h>
#include<string.h>
 int main(){
     char str[100]="12aa11bb33";
     int count[10]={0};
      for(int i=0;i<strlen(str);i++){
          if(str[i]>='0' && str[i]<='9'){
              count[str[i]-'0']++;
      }
 }
    for(int i=0;i<10;i++){
        if(count[i]>0){
        printf("%d occured %d\n",i,count[i]);
    }
            
          }
 }
