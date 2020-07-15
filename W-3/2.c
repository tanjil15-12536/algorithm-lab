#include<stdio.h>
int main()
{
    int n,a[20],i,c=0,key,sum=0,max,min;
    printf("Enter array size: ");
    scanf("%d",&n);
    printf("Enter elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum+=a[i];
    }


    max = a[0];
    for(i=0;i<n;i++)
    {
        if(max < a[i])
        {
            max = a[i];
        }
    }

    min = a[0];
    for(i=0;i<n;i++)
    {
        if(min > a[i])
        {
            min = a[i];
        }
    }

    printf("%d %d\n",sum-max,sum-min);


    return 0;
}

