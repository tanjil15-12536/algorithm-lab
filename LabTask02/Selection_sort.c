#include<stdio.h>
int main()
{
    int i, j, temp;
    int arr[5] = {6,7,2,3,1};

    for(i=0; i<5; i++)
    {
        for(j=i+1; j<5; j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("After Sorting: ");
    for(i=0; i<5; i++)
        printf(" %d",arr[i]);

    return 0;
}
