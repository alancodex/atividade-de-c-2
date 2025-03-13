#include <stdio.h>
 
int main() {
 
    double N;
    int cem = 0, cinq = 0, vinte=0, dez=0, cinco=0, dois=0, um=0, cinqCen=0, vintecincoCen=0,dezCen=0,cincoCen=0,umCen=0;
    scanf("%lf", &N);
        while (N >= 100){
            N = N - 100;
            cem++;
        } 
        while (N>=50){
            N = N - 50;
            cinq++;
        } 
        while (N>=20){
            N = N - 20;
            vinte++;
        } 
        while (N>=10){
            N = N - 10;
            dez++;
        } 
        while (N>=5){
            N = N - 5;
            cinco++;
        } 
        while (N>=2){
            N = N - 2;
            dois++;
        } 
        while (N>=1){
            N = N - 1;
            um++;
        } 
        while (N>=0.50){
            N = N - 0.50;
            cinqCen++;
        } 
        while (N>=0.25){
            N = N - 0.25;
            vintecincoCen++;
        } 
        while (N>=0.10){
            N = N - 0.10;
            dezCen++;
        } 
        while (N>=0.05){
            N = N - 0.05;
            cincoCen++;
        } 
        while (N>=0.01) {
            N = N - 0.01;
            umCen++;
        }
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", cem);
    printf("%d nota(s) de R$ 50.00\n", cinq);
    printf("%d nota(s) de R$ 20.00\n", vinte);
    printf("%d nota(s) de R$ 10.00\n", dez);
    printf("%d nota(s) de R$ 5.00\n", cinco);
    printf("%d nota(s) de R$ 2.00\n", dois);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", um);
    printf("%d moeda(s) de R$ 0.50\n", cinqCen);
    printf("%d moeda(s) de R$ 0.25\n", vintecincoCen);
    printf("%d moeda(s) de R$ 0.10\n", dezCen);
    printf("%d moeda(s) de R$ 0.05\n", cincoCen);
    printf("%d moeda(s) de R$ 0.01\n", umCen);
    return 0;
}