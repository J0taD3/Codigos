#include <stdio.h>
#include <locale.h>
#define m 3

int matriz ( int c[m][m]){
    setlocale(LC_ALL, "portuguese_Brazil");
    int a, b;
    printf("\t\tConfira sua matriz\n");
	for(a=0;a<m;a++){
		for(b=0;b<m;b++){
			printf("\t |%i|",c[a][b]);
		}
		printf("\n");
	}	
}

int digsec ( int c[m][m]){
    setlocale(LC_ALL, "portuguese_Brazil");
    int a, b;
    printf("\t\tDiagonal Secundária\n");
    	for(a=0;a<m;a++){
	      for(b=0;b<m;b++){
	          if (b==(m-1-a)){
	         printf(" |%i|", c[a][b]);
	         }
	     } 
    printf("\n");
	}
}
main () {
	setlocale(LC_ALL, "portuguese_Brazil");
	int l, p, c[m][m];
	for(l=0;l<m;l++){
		printf("\n\t\t Preencha a linha %i: \n",l+1);
		for(p=0;p<m;p++){
			printf("Dê um valor pra coluna %i: ",p+1);
			scanf("%i",&c[l][p]);
		}
	}
	
    matriz (c);
    digsec (c);
return 0;
} 

