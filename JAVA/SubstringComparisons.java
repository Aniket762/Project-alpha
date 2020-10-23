import java.util.Scanner;

public class SubstringComparisons {

    public static String getSmallestAndLargest(String s, int k) {
        String smallest = "";
        String largest = "";
        
        String small="",large="";
        int length=s.length();
        int times=length-k+1;
        String[] word=new String[times];
        for(int i=0;i<times;i++)
        {
            word[i]=s.substring(i,i+k);
        }
       small=word[0];
       large=word[times-1];
        for(int i=0;i<times;i++)
        {
            if(word[i].compareTo(small)<0)
                small=word[i];
            else if(word[i].compareTo(large)>0)
                large=word[i];
            else
                continue;
        }
        smallest=small;
        largest=large;
        
        return smallest + "\n" + largest;
    }


    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String s = scan.next();
        int k = scan.nextInt();
        scan.close();
      
        System.out.println(getSmallestAndLargest(s, k));
    }
}
