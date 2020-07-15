#include<stdio.h>
int main()
{
    int i,j,n,temp;

    printf("Enter Array Size : ");
    scanf("%d",&n);
    int arr[n];

    printf("Enter Data : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0; i<n; i++)
    {
        j=i;
        while(j>0 && arr[j]<arr[j-1])
        {
            temp = arr[j];
            arr[j] = arr[j-1];
            arr[j-1] = temp;
            j--;
        }
    }
    printf("Descending Order : ");
    for(i=n-1; i>=0; i--)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
