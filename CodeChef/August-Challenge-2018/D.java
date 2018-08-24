import java.math.BigInteger;
import java.util.*; 

/**
 *
 * @author anik
 */
public class Main {
   
    
    
public static long gcd(long a, long b)
{
    if (a==0)
       return b;
    return gcd(b%a,a);
}
 
 
public static long reduceB(long a, String b)
{
    long mod = 0;
 
    for (int i=0; i<b.length(); i++)
        mod = (mod*10 + b.charAt(i) - '0')%a;
 
    return mod;
}
 
 
 
    
    public static void main(String args[]){
        
        Scanner sc = new Scanner(System.in); 
        
        int T=sc.nextInt(); 
        
        while(T-->0){
        long A=sc.nextLong();
        BigInteger AA = BigInteger.valueOf(A);
        long B=sc.nextLong(); 
        BigInteger BB = BigInteger.valueOf(B);
        long N=sc.nextLong();
        BigInteger NN = BigInteger.valueOf(N);
        int C = 1000000007;
        BigInteger CC = BigInteger.valueOf(C);
        
        long y = A-B; 
        BigInteger YY = BigInteger.valueOf(y); 
        
        BigInteger ans; 
        
        
        if(y==0){
            BigInteger first = AA.modPow(NN, CC);
            BigInteger second = BB.modPow(NN, CC);
            
            ans = (first.add(second)).mod(CC);
            System.out.println(ans); 
        }else{
            BigInteger one = AA.modPow(NN, YY);
            BigInteger two = BB.modPow(NN, YY); 
            
            BigInteger item = one.add(two);
            ans = (item.gcd(YY)).mod(CC); 
            System.out.println(ans); 
        }    
        
        
       
        
        
        }
    
    }
    
}
 