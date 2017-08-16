#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#define v 20
int main ()
{
  setlocale (LC_ALL, "portuguese_Brazil");
  int n[v], a, b;

  for (a = 0; a < v; a++)
    {
      printf ("Digite um número %i: ", a + 1);
      scanf ("%i", &n[a]);
    }

  for (a = 0; a < v; a++)
    {
      printf ("\nA ordem dada é %i: %i", a + 1, n[a]);
    }

    printf("\n");
    
  for (b = (v-1); b >= 0; --b)
    {
      printf ("\nA ordem inversa é %i: %i", b+1, n[b]);
    }

  return 0;

}
