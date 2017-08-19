#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL, "portuguese_Brazil");
	float n[3][4], m = 0;
	int   l, c;
	for(l = 0; l <= 2; l++){
		printf("\n\t\t\t Linha n° %i ",l+1);
		for(c = 0;c <= 3;c++){
			printf("\nPreencha com a nota do trabalho/prova %i: ", c+1);
			scanf("%f",&n[l][c]);
		}
	}
	
	for(l=0;l<=2;l++){
		for(c=0;c<=3;c++){
			m=m+n[l][c];
		}
	}
	printf("Media geral da turma é: %.2f",m);
	
	return 0;
	system ("pause");
}
