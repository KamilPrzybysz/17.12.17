#include <stdio.h>
#include <stdlib.h>

int licz(int ilosc, int czas)
{
  int godz=ilosc/czas;
  int min=ilosc%czas;

  printf("Podana ilość minut to %d godzin i %d minut \n", godz, min);

}

int main()
{
  int ilosc;
  printf("Podaj czas w minutach: ");
  scanf("%d", &ilosc);
  const int czas=60;
  licz(ilosc, czas);
  return 0;
}
