#include<stdio.h>
#include <ctype.h>
#include<string.h>

void sort(char arr[],int col){
    char temp;
    for(int i=0;i<col-1;i++){
        for(int j=i+1;j<col;j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}
int main(){
    char str[]="Db91a2";
    char letter[100];
    char digit[100];
    int l=0,d=0;
 for(int i=0;i<strlen(str);i++){
     if(isalpha(str[i]))
     letter[l++]=str[i];
     else if(isdigit(str[i]))
     digit[d++]=str[i];
    sort(letter,l);
    sort(digit,d);
 }    
 printf("%s%s",letter,digit);
}
    
