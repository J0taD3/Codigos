#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int menu(){
	
	setlocale(LC_ALL, "portuguese_Brazil");
	
	int r;
	printf("\nCalculadora\n\n");
	printf("\n_____________________________");
	printf("\n1-Soma\n2-Subtra��o\n3-Multiplica��o\n4-Divis�o\n5-Sair\n\n");
	printf("Digite sua op��o: ");
	scanf("%i", &r);
	
	return r;
}

void soma (int x, int y) {
	system("cls");
	printf("Resultado = %i", x+y);
}
	void subtracao (int x, int y) {
		system("cls");
	printf("Resultado = %i", x-y);
}
	void multiplicacao (int x, int y) {
		system("cls");
	printf("Resultado = %i", x * y);
}
	void divisao (int x, int y) {	
	while(y==0){printf("Valor definindo inv�lido.\nInforme valor diferente de zero: ");	
	scanf("%i", &y);} 
	system("cls");
	printf("Resultado = %i", x / y);
}

main(){
	setlocale(LC_ALL, "portuguese_Brazil");
	int r, a, b;
	r=menu ();
	while(r!=5){
	printf("\nInforme o valor de a: ");
	scanf("%i", &a);
	printf("Informe o valor de b: ");
	scanf("%i", &b);
	if (r==1) soma(a,b);
	else if (r==2) subtracao(a,b);
	else if(r==3) multiplicacao(a,b);
	else if (r==4) divisao(a,b);
	
	r=menu ();	
}
	
	

}
