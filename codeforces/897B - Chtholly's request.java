import java.util.Scanner;


public class Main {
    
    static String evenlength(String n)
    {
       
        String res = n;
  
      
        for (int j = n.length() - 1; j >= 0; --j)
            res += n.charAt(j);
  
        return res;
    }
     
    
    public static void main (String[] args) 
    {
        
        Scanner sc = new Scanner(System.in); 
        
        long k, p, sum=0; 
        k=sc.nextInt(); 
        p = sc.nextInt(); 
        
        for(int i=1; i<=k; i++){
           
            String a = String.valueOf(i); 
            
            String b = evenlength(a); 
            
            long add = Long.parseLong(b); 
            
            sum += add; 
            
           
            
        }
        
        System.out.println(sum % p); 
        
        
    }
    
}
