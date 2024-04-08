#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

void fibonacci(int p, int s, int x){
    printf("%d %d ",p,s);
    if(x==p || x==s){
        printf("\nO numero pertence a sequencia!\n");
        return;
    }
    if(p>x){
        printf("\nValor nao pertece a sequencia\n");
        return;
    }
    p = p+s;
    s = p+s;
    fibonacci(p,s,x);
}

int main(){
    int primeirovalor=0;
    int segundovalor=1;
    int valorprocurado;
    scanf("%d",&valorprocurado);

    fibonacci(primeirovalor,segundovalor,valorprocurado);
    
    return 0;
}