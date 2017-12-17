#include <stdio.h>
#include <stdlib.h>

int licz(int czas)
{
  int godz=czas/60;
  int min=czas%60;

  printf("Podana ilość minut to %d godzin i %d minut \n", godz, min);

}

int main()
{
  int ilosc;
  printf("Podaj czas w minutach: ");
  scanf("%d", &ilosc);
  const int czas=ilosc;
  licz(czas);
  return 0;
}
