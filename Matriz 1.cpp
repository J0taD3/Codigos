#include <stdio.h>
#include <locale.h>
int main () {
	setlocale(LC_ALL, "portuguese_Brazil");
	int a, b, c[3][3];
	for(a=0;a<=2;a++){
		printf("\n\t\t Preencha a linha %i: \n",a+1);
		for(b=0;b<=2;b++){
			printf("Dê um valor pra coluna %i: ",b+1);
			scanf("%i",&c[a][b]);
		}
	}
	for(a=0;a<=2;a++){
		for(b=0;b<=2;b++){
			printf("\n\n A localização [%i] [%i] contém: %i.",a+1, b+1,c[a][b]);
		}
	}	

return 0;
} 
