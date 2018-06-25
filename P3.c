//Laila Carolina de Paula Miranda 11721EEL022

#include <stdio.h>

#include <stdio.h>
void conv2bin(int i)
{
    unsigned int u_i=0;
    int j=0, b[32]={0};
    u_i = (unsigned int)i;
    for(j=31;j>=0;j--) 
	{
        b[j]=u_i&0x1;
        u_i=u_i>>1;
    }
    for (j=0;j<=31;j++)
        printf("%d", b[j]);
}
int main()
{
	int num=0, num2=0, menu, conv=0, bin=0, bin2=0, conv_bin=0;
	do
	{
		printf("\n1. NOT \n2. AND \n3. OR \n4. XOR \n5. Right Shitf \n6. Left Shitf \n7. Sair do Programa \n:");
		scanf("%i", &menu);
		getchar();
		switch(menu)
		{
			case 1:
			    printf("\n: "); 
			    scanf("%i", &num); 
			    getchar();
			    conv=~num;
				printf("\nNOT %i (", num); 
				conv2bin(num); 
				printf(") : %i (", conv);
				conv2bin(conv);
				printf(")\n"); // Desculpa a gambiarra
			    break;
			case 2:
				printf("\n: "); 
			    scanf("%i %i", &num, &num2); 
			    getchar();
			    conv=num&num2;
			    printf("\n %i (", num); 
				conv2bin(num); 
				printf(") AND %i (", num2);
				conv2bin(num2);
				printf(") : %i (", conv);
				conv2bin(conv);
				printf(")\n");
				break;
			case 3:
				printf("\n: "); 
			    scanf("%i %i", &num, &num2); 
			    getchar();
			    conv=num|num2;
			    printf("\n %i (", num); 
				conv2bin(num); 
				printf(") OR %i (", num2);
				conv2bin(num2);
				printf(") : %i (", conv);
				conv2bin(conv);
				printf(")\n");
				break;
			case 4:
				printf("\n: "); 
			    scanf("%i %i", &num, &num2); 
			    getchar();
			    conv=num^num2;
			    printf("\n %i (", num); 
				conv2bin(num); 
				printf(") XOR %i (", num2);
				conv2bin(num2);
				printf(") : %i (", conv);
				conv2bin(conv);
				printf(")\n");
				break;
			case 5:
				printf("\n: "); 
			    scanf("%i %i", &num, &num2); 
			    getchar();
			    conv=num>>num2;
			    printf("\n %i (", num); 
				conv2bin(num); 
				printf(") >> %i (", num2);
				conv2bin(num2);
				printf(") : %i (", conv);
				conv2bin(conv);
				printf(")\n");
			case 6:
				printf("\n: "); 
			    scanf("%i %i", &num, &num2); 
			    getchar();
			    conv=num<<num2;
			    printf("\n %i (", num); 
				conv2bin(num); 
				printf(") << %i (", num2);
				conv2bin(num2);
				printf(") : %i (", conv);
				conv2bin(conv);
				printf(")\n");
			default:
				if (menu!=7)
				{
				printf("\nOpcao invalida");
				break;
		    	}
		}
	}while(menu!=7);
	return 0;
}
