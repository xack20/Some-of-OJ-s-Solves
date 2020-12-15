
import java.util.*;
public class Main {
    static int c = 0;
    private static int fib(int n)
    {
        c++;
        if (n==0)  return 0;
        else if (n==1) return 1;
        else return fib(n-1)+fib(n-2);
    }
    public static void main(String[] args) {
        
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        for(int i = 1 ; i <=a ; i ++)
        {
            c= 0;
            int n = sc.nextInt();
            int ans = fib(n);
            System.out.println("fib("+n+") = "+ --c +" calls = "+ans);

        }

    }
}