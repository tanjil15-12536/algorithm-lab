//lcm
#include <stdio.h>

int gcd(long long int a,long long  int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

int lcm(long long int a,long long  int b)
{
    return (a*b)/gcd(a, b);
}

int main()
{
    long long int a,b;
    scanf("%d %d",&a,&b);
    printf("%lld ",lcm(a, b));
    return 0;
}
