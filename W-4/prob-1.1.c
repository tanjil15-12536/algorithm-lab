#include<stdio.h>
int main()
{
    int n,i,j,temp;
    printf("Enter Array size: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter Data: ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0; i<n-1; i++)
    {
        for(j=0; j<n-i; j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("Descending Order : ");

    for(i=n-1; i>=0; i--)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
