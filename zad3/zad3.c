#include<stdio.h>
#include<stdlib.h>

int suma(int a, int b, int *d)
{
  int aa=a;
  int bb=b;
  int i;
  int suma_d=0;
  for(i=aa; i<=bb; i++)
  {
    suma_d+=i;
  }
  
  *d=suma_d;
}

int kwadrat(int a, int b, int *k)
{
  int aa=a;
  int bb=b;
  int i;
  int suma_k=0;
  for(i=aa; i<=bb; i++)
  {
    suma_k=i*i+suma_k;
  }

  *k=suma_k;
}

int main()
{
  int poczatek, koniec;
  printf("Podaj liczbę rozpoczynającą przedział: ");
  scanf("%d", &poczatek);
  printf("Podaj liczbę kończącą przedział: ");
  scanf("%d", &koniec);
  while(poczatek>=koniec)
  {
    printf("Podaj liczbę rozpoczynającą przedział(musi być mniejsza od kończącej): ");
    scanf("%d", &poczatek);
    printf("Podaj liczbę kończącą przedział(musi większaz od początkowej): ");
    scanf("%d", &koniec);

  }
  const int a=poczatek;
  const int b=koniec;
  int suma_d;
  int suma_k;
  suma(a,b, &suma_d);
  kwadrat(a,b, &suma_k);

  printf("Suma liczb z tego przedziału to: %d\n", suma_d);
  printf("Suma liczb z tego przedziału to: %d\n", suma_k);

  return 0;
}
