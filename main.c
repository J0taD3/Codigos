#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
   setlocale(LC_ALL, "portuguese_Brazil");
   int n[20], a, b;
   
   for(a=0;a<20;a++){
       printf("Digite um número %i: ",a+1);
       scanf("%i",&n[a]);
   }
   
   for(a=0;a<20;a++){
       printf("\nA ordem dada é %i: %i", a+1, n[a]);
   }
   
   for(b=20;b>0;--b){
       printf("\nA ordem inversa é %i: %i", b, n[b]);
   }
   
}

