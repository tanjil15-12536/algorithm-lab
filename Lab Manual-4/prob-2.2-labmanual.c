#include<stdio.h>
int main()
{
    int i,j,n,temp,max,min;

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
    printf("Ascending Order : ");
    for(i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");

    max = arr[0];
    for(i=0;i<n;i++)
    {
        if(max < arr[i])
        {
            max = arr[i];
        }
    }

    min = arr[0];
    for(i=0;i<n;i++)
    {
        if(min > arr[i])
        {
            min = arr[i];
        }
    }

    printf("Difference btn max-min = %d\n",max-min);

    return 0;
}
