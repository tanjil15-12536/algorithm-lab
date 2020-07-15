#include<stdio.h>
int main()
{
    int n,a[20],i,c=0,key,flag;
    printf("Enter element: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter Number: ");
    scanf("%d",&key);

    for(i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            c++;
            flag=1;
        }
        else
        {
            flag = 0;
        }
    }

    if(flag==1)
    {
        printf("Last Occurrence = %d\n",c);
    }
    else
        printf("Item not found\n");




    return 0;
}
