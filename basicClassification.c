//
// Created by oz on 17/11/22.
//
int isPrime(int);
int isStrong(int);
int factorial(int);

int isPrime(int n)
{
    for(int i = 2; i*i <= n;i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}




int isStrong(int n)
{
    int sumstrong=0;
    int tmp=n;
    while(tmp>0)
    {
        sumstrong+=factorial(tmp%10);
        tmp=tmp/10;
    }
    if(n==sumstrong)
        return 1;
    return 0;
}
int factorial(int n)
{
    int sumfactorial = 1;
    for (int i = 1; i <= n;i++)
        sumfactorial *= i;
    return sumfactorial;
}