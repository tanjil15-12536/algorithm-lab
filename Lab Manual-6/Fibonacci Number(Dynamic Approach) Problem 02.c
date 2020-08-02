
#include<stdio.h>
int fib(int n)
{
    int f[n+2];
    int i;
    f[0] = 0;
    f[1] = 1;
    for (i = 2; i <= n; i++)
    {
        f[i] = f[i-1] + f[i-2];
    }
    return f[n];
}
int main ()
{
    int n,t,i;

    printf("Test Case: ");
    scanf("%d",&t);

    for(i=1;i<=t;i++)
    {
        printf("Number %d: ",i);
        scanf("%d",&n);

        printf("Fibonacci Number : %d\n", fib(n));
    }

    getchar();
    return 0;
}
