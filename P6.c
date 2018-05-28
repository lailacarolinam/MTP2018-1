//Laila Carolina de Paula Miranda
//11721EEl022

#include <stdio.h>

int soma(int num[], int quant){
    if(quant==0)
        return num[quant];
    else 
        return (num[quant]+soma(num,quant-1));
}

float Media(Sum,quant){
    float M;
    M = Sum/quant;
    return M;
}

int main()
{
    int num[20], i, N, s=0;
    do {
        printf("\nDigite quantos numeros devem ter no vetor, entre 5 e 10: ");
        scanf("%d", &N);
        getchar();    
    }while(N<5 || N>20);
    printf("\n\nDigite os do vetor: ");
    for(i=0; i<=20; i++)
        num[i]=0;
    for(i=0; i<N; i++){
        scanf("%d", &num[i]);
        getchar();
    }
    printf("A media e: %.4f", Media(soma(num,N),N));
    return 0;    
}
