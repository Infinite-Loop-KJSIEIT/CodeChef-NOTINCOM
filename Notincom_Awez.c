#include <stdio.h>
#include<stdlib.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t-->0)
	{
	    int *C;
	    C = (int*) malloc(1000000 * sizeof(int));
	    int a,m,n,i,c=0;
	    scanf("%d%d",&m,&n);
	    for( i = 0 ; i<m ; i++)
	   {
	        scanf("%d",&a);
	        C[a] = 1;
	   }
	    for(i = 0 ; i<n ; i++)
	    {   scanf("%d",&a);
	        if(C[a] == 1)
	            c++;
	    }
	    printf("%d\n",c);
	}
	return 0;
}
