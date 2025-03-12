#include <stdio.h>

int main(){
    int np = 0, nd = 1, prox, valor;

    scanf("%d", &valor);
    

    
    for (int i = 0; i < valor; i++){
        printf("%d", np);
        
        if (i < valor-1){
        printf(" ");
    }
        prox = np + nd;
        np = nd;
        nd = prox;
    }
    printf("\n");
    return 0;
}