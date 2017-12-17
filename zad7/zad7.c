#include<stdio.h>
#include<stdlib.h>

int zamiana(int aa, int bb)
{
  aa=aa^bb;
  bb=aa^bb;
  aa=aa^bb;
  printf("Liczby po zamianie to a=%d i b=%d\n", aa, bb);
}

int main()
{
  int a, b;
  printf("Podaj liczbę a: ");
  scanf("%d", &a);
  printf("Podaj liczbę b: ");
  scanf("%d", &b);
  const int aa=a;
  const int bb=b;

  zamiana(aa,bb);


  return 0;
}
