#include <stdio.h>
#include <locale.h>
#define m 3
#define n 3

int main () {
	setlocale(LC_ALL, "portuguese_Brazil");
	int a, b, c[m][n];
	for(a=0;a<m;a++){
		printf("\n\t\t Preencha a linha %i: \n",a+1);
		for(b=0;b<n;b++){
			printf("Dê um valor pra coluna %i: ",b+1);
			scanf("%i",&c[a][b]);
		}
	}
	for(a=0;a<m;a++){
		for(b=0;b<n;b++){
			printf("\n Para [%i] [%i]: %i.",a+1, b+1,c[a][b]);
		}
	}	
	
	
    	for(a=0;a<m;a++){
	      for(b=0;b<n;b++){
	          if (b==(n-1-a)){
	         printf("\n[%i] [%i]: %i.", a+1, b+1, c[a][b]);
	         }
	     } 
    }
return 0;
} 

