#include <stdio.h>
int main() {
  int t;
  scanf("%d",&t);
  while(t--)
  {
      long int n,k,p,x,i,j=0;
      scanf("%ld %ld %ld",&n,&k,&p);
	  long int arr[n];
	  for(i=0; i<=n; i++)
	  arr[i]=0;

	   for(i=1; i<=k; i++)
	    {
         scanf("%ld",&x);
	     arr[x]=1;
	    }
      for(i=1; i<=n; i++)
	  {
       if(arr[i]!=1)
       {
        j++;
        arr[j]=i;
       }
     }
    if(p>j)
    printf("-1\n");
    else
    printf("%d\n",arr[p]);

  }
  return 0;
}
