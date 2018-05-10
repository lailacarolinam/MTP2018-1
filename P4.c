//Laila Carolina de Paula Miranda 11721EEL022

#include <stdio.h>

int main()
{
    char a[257];
    int num , i=0 ,cum=0;
    printf("Digite um numero inteiro a seguir: ");
    scanf("%s", &a);
    getchar();
    while(a[i]!='\0'){
        if(a[i]>='0' && a[i]<='9'){
            num=a[i]-'0';
            cum+=num;
            cum*=10;
            i++;
        }
        else{
            cum+=0;
            i++;
        }
    }
    cum/=10;
    printf("\nSeu valor e: %d.",cum);
    return 0;
}
