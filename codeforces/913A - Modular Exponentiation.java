import java.math.BigInteger;
import java.util.Scanner;

/**
 *
 * @author th3an
 */
public class Main {
    
 
    
    public static void main(String args[]){
        
        Scanner sc = new Scanner(System.in); 
        BigInteger m, mo; 
     
        int n; 
        n = sc.nextInt() ;
        m = sc.nextBigInteger(); 
        mo = BigInteger.valueOf(2).pow(n);
        System.out.println(m.mod(mo));
        
    }
    
}
