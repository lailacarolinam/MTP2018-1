//Laila Carolina de Paula Miranda 11721EEL022

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int x, i;
    char bit[256];
    printf("Digite o numero em binario: ");
    scanf("%s", bit);
    while(bit[i]!='\0')
    {
        if(x==0 && bit[i]=='0')
        {
            x=0;
            i++;
        }
        if(x==0 && bit[i]!='0')
        {
            x=1;
            i++;
        }
        if(x==1 && bit[i]=='0')
        {
            x=2;
            i++;
        }
        if(x==1 && bit[i]!='0')
        {
            x=0;
            i++;
        }
        if(x==2 && bit[i]=='0')
        {
            x=1;
            i++;
        }
        if(x==2 && bit[i]!='0')
        {
            x=2;
            i++;
        }
    }
    if(x==0)
    {
        printf("\n\nO numero digitado e multiplo de 3");
    }else
    {
        printf("\n\nO numero digitado nao e multiplo de 3");
    }
    printf("\n\nO numero digitado e %d",bit);
    getch();
    return 0;
}
