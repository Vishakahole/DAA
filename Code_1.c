#include <stdio.h>
#include<math.h>

float power(int n)
{
    return pow(1.5, n);
}
float cube(int n)
{
    return n * n * n;
}

float logsq(int n)
{
    return log(n) * log(n);
}

float powpow(int n)
{
    return sqrt(log(n));
}

float loga(int n)
{
    return log(n);
}

float func(int n)
{
    return n * pow(2, n);
}

float logdiv(int n)
{
    return (log(n) / log(2.718));
}

float loga2(int n)
{
    return log(log(n));
}

float expo(int n)
{
    return exp(n);
}

float pown(int n)
{
    return pow(2, n);
}
float fact(int n)
{
    float ans = 1.0;
    for (int i = 1; i <= n; i++)
    {
        ans = ans * i;
    }
    return ans;
}

int main()
{
    printf("Number\t(3/2)^n\tn^3\t(lg n)^2\tsqrt(log n)\tlog n\tn*2^n\tln n\tlog(log n)\te^n\t2^n\n");
    for (int i = 0; i <= 100; i++)
    {
        printf("%d\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\n", i, power(i), cube(i), logsq(i), powpow(i), loga(i), func(i), logdiv(i), loga2(i), expo(i), pown(i));
    }
    printf(" \n Factorial of first 20 numbers\n");
    printf("Number\tn!\n");
    for (int i = 0; i <= 20; i++)
    {
        printf("%d\t%.2f", i, fact(i));
    }
    return 0;
}
