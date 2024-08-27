#include<stdio.h>
#include<string.h>
void FindRep(char str[]){
  int count[256]={0};
  for(int i=0;i<strlen(str);i++){
      count[str[i]]++;
    }
    for(int i=0;i<strlen(str);i++){
        if(count[str[i]]==1){
            printf("%c",str[i]);
        }
    }
}
int main(){
  char str[100]="Hello How are you?";
  FindRep(str);
}
