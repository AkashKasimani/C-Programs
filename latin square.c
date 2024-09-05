#include <stdio.h>
int main() {
    int P;
    printf("Enter matrix size :");
    scanf("%d",&P);
    char square[P][P];
    printf("Latin Square of order %d:\n", P);
    for (int i = 0; i < P; i++) {
        for (int j = 0; j < P; j++) {
            square[i][j] = 'A' + (i + j) % P;
        }
    }
    for (int i = 0; i < P; i++) {
        for (int j = 0; j < P; j++) {
            printf("%c ", square[i][j]);
        }
        printf("\n");
    }
        return 0;
}
