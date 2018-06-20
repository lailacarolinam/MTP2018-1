//Laila Carolina de Paula Miranda 11721EEL022

#include <stdio.h>

void binario_decimal (char binario[])
{
	int i = 0, decimal = 0;
	while(binario[i]) 
	{
		decimal = decimal*2 + (binario[i] - '0');
		i++;
	}
	printf ("\nO numero digitado em decimal: %d\n", decimal);
}

void binario_hexd (char binario[])
{
	int i = 0, decimal = 0;
	while(binario[i])
	{
		decimal = decimal*2 + (binario[i] - '0');
		i++;
	}
	printf ("\nO numero digitado em hexadecimal: %x\n", decimal);
}

int main ()
{
	int operador, decimal, hexd, hexd1, octal, cont, x;
	char binario[256];
	do{
	printf(	"         MENU:\n1)Binario para Decimal\n2)Binario para Hexadecimal\n3)Hexadecimal para Decimal\n4)Hexadecimal para Binário\n5)Decimal para Binario\n6)Decimal para Hexadecimal\n7)Octal para Decimal\n8)Decimal para Octal\n\n");
	scanf ("%d", &operador);
	getchar();
	
	
	if (operador == 1) // Binario -> Decimal
	{
		printf ("\nDigite um numero em base binaria:");
		scanf ("%s", &binario);
		getchar();
		binario_decimal (binario);
	}
	
	else if (operador == 2) // Binario -> Hexd
	{
		printf ("\nDigite um numero em base binaria:");
		scanf ("%s", &binario);
		getchar();
		binario_hexd (binario);
	}
	
	else if (operador == 3) // Hex -> Dec
	{
		printf ("\nDigite um numero em base hexadecimal:");
		scanf ("%x", &hexd);
		getchar();
		printf ("\nO numero digitado em decimal: %d\n", hexd);
	}
	
	else if (operador == 4) // Hex -> Bin
	{
		printf ("\nDigite um numero em base hexadecimal:");
		scanf ("%x", &hexd);
		getchar();
		printf ("\nNumero auxiliar: %d\n", hexd);
		printf ("\nDigite o numero auxiliar printado acima: ");
		scanf ("%d", &decimal);
		getchar();
		itoa(decimal,binario,2);
		printf ("\n%d em binario: %s\n", decimal,binario);
	}

	
	else if (operador == 5) // Dec -> Bin
	{
		printf ("\nDigite um numero em base decimal:");
		scanf ("%d", &decimal);
		getchar();
		itoa(decimal,binario,2);
		printf ("\n%d em binario: %s\n", decimal,binario);
	}
	
	else if (operador == 6) // Dec -> Hex
	{
		printf ("\nDigite um numero em base decimal:");
		scanf ("%d", &decimal);
		getchar();
		printf ("\nO numero digitado em hexadecimal: %x\n", decimal);
	}
	
	else if (operador == 7) // Oct -> Dec
	{
		printf ("\nDigite um numero em base octal:");
		scanf ("%o", &octal);
		getchar();
		printf ("\nO numero digitado em decimal: %d\n", octal);
	}
	
	else if (operador == 8) // Dec -> Oct
	{ 
		printf ("\nDigite um numero em base decimal:");
		scanf ("%d", &decimal);
		getchar();
		printf ("\nO numero digitado em octal: %o\n", decimal);
	}
	
	else
	{
		printf ("\nOPCAO INVALIDA\n");
	}
	x++;
	}while(x<100);
	return 0;
}
