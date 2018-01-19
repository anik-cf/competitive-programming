import java.util.Scanner;


/**
 *
 * @author th3an
 */
public class Main {
    
 
   public static void main (String[] args)
    {
      
        Scanner sc = new Scanner(System.in); 
   
        int x=sc.nextInt();
        int hh=sc.nextInt();
        int mm = sc.nextInt();
        int cnt=0; 
        
        	while(true){
		
		if(mm%10==7 || hh==7 || hh%10==7)
		break;
		
		if(x>mm){
			
			mm = mm-x + 60;
			hh--;  
			//cout << hh << endl;
		}
		
		else{
			mm-=x;
			//cout << mm << endl;
		}
		
		
		
		cnt++; 
		
		if(hh<1)
		hh=23;
		
		
		
	}
                
                System.out.println(cnt); 
        
  }
  
}
