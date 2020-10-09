import java.util.Scanner;

class WaysToCoverDistance  
{ 
    
    static int printCountRec(int dist) 
    { 
        
        if (dist<0)     
            return 0; 
        if (dist==0)     
            return 1; 
   
        
        return printCountRec(dist-1) +  
               printCountRec(dist-2) + 
               printCountRec(dist-3); 
    } 
      
    public static void main (String[] args)  
    {   Scanner sc = new Scanner(System.in);
        int dist = (sc.nextInt()); 
        System.out.println(printCountRec(dist)); 
    } 
} 
  