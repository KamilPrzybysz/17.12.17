#include<stdio.h>
#include<stdlib.h>

int suma(int a, int b)
{
  int aa=a;
  int bb=b;
  int i;
  int suma=0;
  for(i=aa; i<=bb; i++)
  {
    suma+=i;
  }
  printf("Suma liczb z tego przedziału to: %d\n", suma);

}

int kwadrat(int a, int b)
{
  int aa=a;
  int bb=b;
  int i;
  int suma=0;
  for(i=aa; i<=bb; i++)
  {
    suma=i*i+suma;
  }
  printf("Suma kwadratów liczb z tego przedziału to: %d\n", suma);

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
  suma(a,b);
  kwadrat(a,b);

  return 0;
}
