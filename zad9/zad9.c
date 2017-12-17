#include<stdio.h>
#include<stdlib.h>

int funkcja(int a, int b)
{
  if (b == 1)
        return a;
    if (b % 2 == 0)
    {
        int s = funkcja(a, b / 2);
        return s * s;
    } else
    {
        int s = funkcja(a, b - 1);
        return a * s;
    }
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
