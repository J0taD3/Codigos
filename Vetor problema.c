#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#define v 5
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

  for (b = v; b > 0; --b)
    {
      printf ("\nA ordem inversa é %i: %i", b, n[b]);
    }

  return 0;

}
