
#include <stdio.h>

long fib(int);

int main()
{
    int n=0;
    while(n>=0)
    {
        printf("Podaj numer wyrazu ciagu Fibonacciego: ");
        scanf("%d",&n);
        if(n>=0)
            printf("N-ty wyraz ciagu Fibonacciego wynosi %ld\n\n",fib(n));
        else
        {
            printf("Podano nieprawidłowy numer wyrazu (ujemny)!\n\n");
            n=0;
        }
    }
    return 0;
}

long fib(int n)
{

    if ((n==0)||(n==1))
        return n;
    else
        return (fib(n-1)+fib(n-2));

}
