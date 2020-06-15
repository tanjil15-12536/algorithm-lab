#include<stdio.h>
int main()
{
    int i,j,temp;
    int arr[5] = {5,8,1,6,2};

    for(i=0;i<5;i++)
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

    printf("After Sorting: ");
    for(i=0;i<5;i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}
