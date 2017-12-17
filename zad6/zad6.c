
#include <stdio.h>
#include <stdlib.h>
int sprawdzanko(int x)
{
  int k=1;
  int n=x;
  while(n!=0)
  {
    if(n&1==1)
    {
      printf("%d bit jest jedynka \n",k);
    }
    k++;
    n>>=1;
  }
}
int main()
{
  int liczba=0;
  printf("Podaj liczbe: \n");
  while(liczba<=0)
  {
    scanf("%d",&liczba);
  }
  sprawdzanko(liczba);

  return 0;
}
