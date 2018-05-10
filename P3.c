#include <stdio.h>

int dtob(int a)
{
	int i,r;
	for(i=31;i>0;i--)
	{	r = a >> i;
		if(r & 1){printf("1");}
		else {printf ("0");}
	}
}
int main()
{
	int	menu,n,m;
	printf("\n           MENU:"
	"\n1-NOT\n2-AND\n3-OR\n4-XOR\n5-Right Shift\n6-Left Shift\n");
	do{
	scanf("%d", &menu);
	getchar();

		switch(menu)
		{
			case 1:
				printf("\nDigite um numero inteiro: ");
				scanf("%d", &n);
				getchar();
				printf("\t\t\t\t   A | NOT\n");
				printf("%d  (",n);
				dtob(n);
				printf(")| %d  (",(~n));
				dtob(~n);
				printf(")\n\n");
				break;
			case 2:
				printf("\n Digite dois numeros inteiros:\n");
				scanf("%d",&n);
				scanf("%d",&m);
				getchar();
				printf("\n\t\tA\t\t    |\t\tB\t\t\t |\t\t  AND\t\t\n");
				printf("%d(",n);
				dtob(n);
				printf(") | %d(",m);
				dtob(m);
				printf(") | %d(", n&m);
				dtob(n&m);
				printf(")\n\n") ;
				break;
			case 3:
				printf("\n Digite dois numeros inteiros:\n");
				scanf("%d",&n);
				getchar();
				scanf("%d",&m);
				getchar();
				printf("\n\t\tA\t\t     |\t\tB\t\t\t  |\t\t  OR\t\t\n");
				printf("%d( ",n);
				dtob(n);
				printf(") | %d(",n);
				dtob(m);
				printf(") | %d(",n|m);
				dtob(n|m);
				printf(")\n\n") ;
				break;
			case 4:
				printf("\n Digite dois numeros inteiros:\n");
				scanf("%d",&n);
				getchar();
				scanf("%d",&m);
				getchar();
				printf("\n\t\tA\t\t    |\t\tB\t\t\t |\t\t  XOR\t\t\n");
				printf("%d(",n);
				dtob(n);
				printf(") | %d(",m);
				dtob(m);
				printf(") | %d(",n^m);
				dtob(n^m);
				printf(")\n\n");
				break;
			case 5:
				printf("\n Digite um numero inteiro e quantos bits deseja deslocar para a direita:\n");
				scanf("%d",&n);
				getchar();
				scanf("%d",&m);
				getchar();
				printf("\n\t\tA\t\t       |\t\t>>\t\t     |\t RIGHT SHIFT\t\t\n");
				printf("%d(",n);
				dtob(n);
				printf(") | %d>>(",m);
				dtob(m);
				printf(") | %d(",n>>m);
				dtob(n>>m);
				printf(")\n\n") ;
				break;
			case 6:
				printf("\n Digite um numero inteiro e quantos bits deseja deslocar para a esquerda:\n");
				scanf("%d",&n);
				getchar();
				scanf("%d",&m);
				getchar();
				printf("\n\t\tA\t\t     |\t\t<<\t\t\t\t  |\t\tLEFT SHIFT\t\t");
				printf("%d(",n);
				dtob(n);
				printf(") | << %d bits(",m);
				dtob(m);
				printf(") | %d(",n<<m);
				dtob(n<<m);
				printf(")\n\n") ;
				break;
		}
    }while(menu>0 && menu<7);
 return 0;
}
