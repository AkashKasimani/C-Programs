#include <stdio.h>

int find_nth_term(int n, int a, int b, int c) {
    int ans;
  if(n==1){
      ans=a;
  }
  else if(n==2){
      ans=b;
  }
  else if(n==3){
      ans=c;
  }
  else{
       for (int i = 4; i <= n; i++) {
           ans=a+b+c;
            a = b;
            b = c;
            c = ans;
        }
  }
  return ans;
}

int main() {
    int n, a, b, c;
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);
    printf("%d", ans); 
    return 0;
}
