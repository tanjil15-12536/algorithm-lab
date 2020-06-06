#include<stdio.h>
int main()
{

    int arr[] = {8,6,9,3,2,10,-4,5,69,16};

    int key = 5 ,i ,position = -1;

    for(i=0; i<10; i++)
    {
        if(key == arr[i])
        {
            position = i+1;
            break;
        }
    }
    if(position==-1)
    {
        printf("Not Found\n");
    }
    else
    {
        printf("position : %d\n",position);
    }



    return 0;
}
