#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    setlocale(LC_ALL, "portuguese_Brazil");
    
    int n[10], c=0, b, a;
    
    for(b=0;b<10;b++){
    printf("Insira um número %i: ", b+1);
    scanf("%i", &n[b]);
    }
    
    printf("Agora informe um número já inserido anteriormente: ");
    scanf("%i",&a);
     
    for(b=0;b<10;b++){
        if (a==n[b]){
        c++;
        }
    }
    
    printf("O número %i se repete %i vezes.",a,c);
    return 0;
}


 
  
   
