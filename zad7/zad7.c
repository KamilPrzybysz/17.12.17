#include<stdio.h>
#include<stdlib.h>

void zamiana(int *a, int *b)
{
  *a=*a^*b;
  *b=*a^*b;
  *a=*a^*b;


}

int main()
{
  int a, b;
  printf("Podaj liczbę a: ");
  scanf("%d", &a);
  printf("Podaj liczbę b: ");
  scanf("%d", &b);


  zamiana(&a,&b);
printf("Liczby po zamianie to a=%d i b=%d\n", a, b);

  return 0;
}
