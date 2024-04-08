#include<stdio.h>

int main(){
    int indice = 13;
    int soma = 0;
    for(int i=0;i<indice;i++){
        i = i+1;
        soma = soma + i;
    } //Soma de números ímpares de a até 13
    printf("O valor da soma = %d\n",soma);

    return 0;
}