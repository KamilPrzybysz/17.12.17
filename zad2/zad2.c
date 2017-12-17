#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#define wielkosc 10

int main()
{
  srand(time(0));
  int tab[wielkosc];
  int i;
  for(i=0; i<10; i++)
  {
    tab[i]=rand()%10;
  }

  for(i=0; i<10; i++)
  {
    printf("%d\n", tab[i]);
  }

  return 0;
}
