#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#define wielkosc 10

int funkcja(int tab[])
{
  int a=tab[0];
  int i;
  if(i==0)
  {
    return 1;
  }
  else

  {
    for(i=0; i<10; i++)
    printf("%d\n", funkcja(tab[i-1]));
  }

}


int main()
{
  srand(time(0));
  int tab[wielkosc];
  int i;
  for(i=0; i<10; i++)
  {
    tab[i]=rand()%10;
  }

  funkcja(tab);

  return 0;
}
