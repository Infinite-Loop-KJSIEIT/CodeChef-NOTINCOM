import java.util.*;
class notincom
{
    public static void main(String args[])
    {
        Scanner sc =new Scanner(System.in);
        int t=sc.nextInt();
        while(t-- > 0)
        {
            int c=0;
            int m=sc.nextInt();
            int n=sc.nextInt();
            int a[]= new int[10000000];
            while(m-- > 0)
            {
              a[sc.nextInt()]=1;
            }
            while(n-- > 0)
            {
                if(a[sc.nextInt()] == 1)
                  c++;
            }
            System.out.println(c);
        }
        
        
    }
}
