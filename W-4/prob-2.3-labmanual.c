
#include<stdio.h>
int main()
{
    int i,j,n,temp;
    float sum=0;

    printf("Enter Array Size : ");
    scanf("%d",&n);
    int arr[n];

    printf("Enter Data : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sum+=arr[i];
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
    printf("Avg : %.2f\n",sum/n);

    return 0;
}
