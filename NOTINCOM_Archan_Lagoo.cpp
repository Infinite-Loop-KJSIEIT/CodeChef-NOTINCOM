#include <stdio.h>
using namespace std;
 
int main() {
    //Declaration
    int t;
    
    //Test Cases Input
    scanf("%d", &t);
    //Main
    while(t-->0)
    {
        //Declaration #2
        bool *a;
        a=new bool[10000000];
        int c=0, e, N, M;
        
        //Basic
        scanf("%d", &N);
        scanf("%d", &M);
        
        //Input A
        while(N-->0)
        {
            scanf("%d", &e);
            a[e]=true;
        }
        
        //Input B
        while(M-->0)
        {
            scanf("%d", &e);
            if(a[e]==true)
            {
                c++;
            }
        }
        
        //Output
        printf("%d\n", c);
    }
    
    //End
	return 0;
}
 
