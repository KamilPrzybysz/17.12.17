#include<stdio.h>
#include<stdlib.h>

int funkcja(int a, int b)
{
  int w;
  if(b==0)
  {
    return 1;
  }
  else
  {
    w=a*funkcja(a, b-1);
  }
return w;
}

int main()
{
  int n, k;
  printf("Podaj liczbę n: ");
  scanf("%d", &n);
  while(n<=0)
  {
    printf("Podaj liczbę dodatnią n: ");
    scanf("%d", &n);
  }
  printf("Podaj liczbę k: ");
  scanf("%d", &k);
  while(k<=0)
  {
    printf("Podaj liczbę dodatnią k: ");
    scanf("%d", &k);
  }

  int wynik=funkcja(n, k);
  printf("Wynik tej funkcji: %d\n", wynik);

  return 0;
}
