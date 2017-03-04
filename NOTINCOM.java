import java.util.Scanner;
/**
 *
 * @author Amey
 */
public class Main
{
    public static void main(String[] args)
    {
        Scanner jin = new Scanner(System.in);
        int T = jin.nextInt();
        while(T-- > 0)
        {
            int A[] = new int[10000000];
            int m, n, c = 0;
            m = jin.nextInt();
            n = jin.nextInt();
            for(int i = 0; i < m; i++)
                A[jin.nextInt()] = 1;
            for(int i = 0; i < n; i++)
            {
                if(A[jin.nextInt()] == 1)
                    c++;
            }
            System.out.println(c);
        }
    }
} 
