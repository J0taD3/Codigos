#include <stdio.h>
#include <locale.h>
#define m 3 //define um tamanho para a matriz (linha X coluna)

int matriz ( int c[m][m]){  //mostra a matriz completa
    int a, b;
    printf("\t\tConfira sua matriz\n");
	for(a=0;a<m;a++){
		for(b=0;b<m;b++){
			printf("\t |%i|",c[a][b]);
		}
	  printf("\n");//apenas para organizar a matriz em tabela
	}	
}

int digsec ( int c[m][m]){ //mostra apenas a diagonal secund�ria
    int a, b;
    printf("\t\tDiagonal Secund�ria\n");
    	for(a=0;a<m;a++){
	      for(b=0;b<m;b++){
	          if (b==(m-1-a)){ //faz a leitura da matriz e indentifica as celulas da diagonal secund�ria
	          printf(" |%i|", c[a][b]);
	         }
	     } 
    printf("\n");
	}
}
main () {
	setlocale(LC_ALL, "portuguese_Brazil");
	int l, p, c[m][m];
	for(l=0;l<m;l++){ //� feita a tribui��o de valores 
		printf("\n\t\t Preencha a linha %i: \n",l+1);
		for(p=0;p<m;p++){
			printf("D� um valor pra coluna %i: ",p+1);
			scanf("%i",&c[l][p]);
		}
	}
printf("\n");
    matriz (c); //chama a fun��o para exibir a matriz completa
printf("\n");
    digsec (c); //chama a fun��o para exibir a diagonal secund�ria
return 0;
} 
