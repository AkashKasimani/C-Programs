#include <stdio.h>
void middle (int n, int num) {
    for(int i=0;i<n;i++){
if(i==0 || i==n-1)
printf("0");
else
printf("%d", num);
}
printf("\n");
}
void start(int n, int num) {
for(int i=0;i<n;i++){
if(i==0 || i==n-1)
printf("%d",num);
else
printf("0"); 
}
printf("\n");
}
int main() {
int n=4;
for(int i=1;i<=n;i++){
if(i==1 || i==n) 
start(n,i);
else
middle(n,i);
 }
return 0;
}
