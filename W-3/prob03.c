#include<stdio.h>
int main()
{
    int arr[] = {1,2,3,4,5,6}, num, left = 0, right = 5, mid;
    printf("Enter a number to search: \n");
    scanf("%d",&num);
    while(left <= right)
    {
        mid = (left+right)/2;
        if(arr[mid] == num)
        {
            printf("Item found at index %d\n",mid);
            return 0;
        }
        else if(arr[mid] < num)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    printf("Item not found\n");
    return 0;
}
