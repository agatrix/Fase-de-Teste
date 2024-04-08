#include<stdio.h>
#include<math.h>

void fibonacci(int p, int s, int x){
    printf("%d %d ",p,s);
    if(x==p || x==s)
        return;
    p = p+s;
    s = p+s;
    fibonacci(p,s,x);
}

int main(){
    int x;
    //primeira logica, numeros impares
    for(x=0;x<15;x++){
        x=x+1;
        printf("%d ",x);
    }
    printf("\n");

    //segunda logica, exponencial de 2
    for(int i=1;i<11;i++)
        printf("%.2f ",(pow(2.0,i)));
        //Ao utilizar o gcc pode não funcionar, compile com o g++ 
    
    printf("\n");

    //terceira logica, numeros ao quadrado
    for(int i=0;i<11;i++)
        printf("%.2f ",(pow(i,2)));

    printf("\n");

    //quarta logica, numeros pares elevados ao quadrado
    for(int i=2;i<11;i+=2)
        printf("%.2f ",(pow(i,2)));

    printf("\n");

    //quinta logica, fibonacci
    fibonacci(0,1,13);

    printf("\n");

    //sexta logica, são numeros que começam com a letra D

    return 0;
}