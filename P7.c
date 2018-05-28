//Laila Carolina de Paula Miranda
//11721EEL022

#include <stdio.h>

int Ack(m,n){
    switch(m){
        case 0: 
        return n+1;
        default:
            if(n==0)
               return Ack(m-1,1);
            else
               return Ack(m-1,Ack(m,n-1));
    }
}

int main()
{   
    int m, n;
    printf("Digite os dois numeros inteiros da funcao de Ackermann: ");
    scanf("%d", &m); getchar();
    scanf("%d", &n); getchar();
    printf("\n\nO resultado de %d e %d foi: %d",m, n, Ack(m,n));
    return 0;
}
