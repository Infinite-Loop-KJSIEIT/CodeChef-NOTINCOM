#include <stdio.h>
#include <string.h>
int main() 
{
    int t, count;
    scanf("%d",&t);
    if(t<=7&&t>=1)
    {
    for(count=1;count<=t;count++)
    {
        int a=0, b=0, i, a1=0, b1=0, st1, st2;
        register int len;
        char house[100000];
        scanf("%s",house);
        len=strlen(house);
        
        for(i=0;i<len;i++)
        {
            if(house[i]=='a'||house[i]=='A')
            {
                a=a+1;
                //continue;
            }
            else if(house[i]=='b'||house[i]=='B')
            {
                b=b+1;
                //continue;
            }
           else if(house[i]=='.')
            {
                int m=i, n=i;
                while(house[m]=='.'&&m<len)
                {
                    m++;
                }
                st1=house[m];
                while(house[n]=='.'&&n!=0)
                {
                    n--;
                }
                st2=house[n];
                
                if(st1==st2&&st1!='.')
                {
                    if(st1=='a'||st1=='A')
                    {
                        a1++;
                    }
                    
                     else if(st1=='b'||st1=='B')
                    {
                        b1++;
                    }
                }
            }
        /*int q,r;
        q=a+a1;
        r=b+b1;
        printf("\n%d %d",q,r);*/
            
        }
        
        int q,r;
        q=a+a1;
        r=b+b1;
        printf("\n%d %d",q,r);
       // printf("\nhey");
        
    }
    }
	return 0;
}

