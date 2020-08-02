#include<stdio.h>
int main()
{
    int ar[]={202,104,304,223,453,123},search,i,flag;

    printf("Enter product Code: ");
    scanf("%d",&search);

    for(i=0;i<6;i++)
    {
        if(ar[i]==search)
        {
            flag=1;
            break;
        }
        else
        {
            flag = 0;
        }
    }
    if(flag==1)
    {
        printf("Position = %d\n",i);
    }
    else
    {
        printf("Item not found\n");
    }


    return 0;
}
