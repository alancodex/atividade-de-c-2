#include <stdio.h>
 
int main() {
    int N, Valores;
    scanf("%d", &Valores);
    for(int i = 0;i < Valores; i++){
    scanf("%d", &N);
        if (N == 0) {
            printf("NULL\n");
        } else {
            if ((N % 2 == 0) && (N > 0)) {
                printf("EVEN POSITIVE\n");
            } else if ((N % 2 == 0) && (N< 0)) {
                printf("EVEN NEGATIVE\n");
            } else if ((N % 2 != 0) && (N > 0)) {
                printf("ODD POSITIVE\n");
            } else if ((N % 2 != 0) && (N < 0)) {
                printf("ODD NEGATIVE\n");
            }
        }
    }
    return 0;
}