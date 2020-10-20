import java.util.Scanner;
public class RootsOfQuadraticEquation{
    public static void main(String args[]){
        Scanner s = new Scanner(System.in);

        int a,b,c,root1=0,root2=0,sqrt=0;

        System.out.print("input the value of a (coefficient of x^2) : ");
        a = s.nextInt();
        System.out.print("input the value of b (coefficient of x) : ");
        b = s.nextInt();
        System.out.print("input the value of c (constant) : ");
        c = s.nextInt();

        sqrt = b*b - (4*a*c);

        if (sqrt>0){
        root1 = (int) (-b +(Math.sqrt(sqrt))/2*a);
        root2 = (int) (-b - (Math.sqrt(sqrt)) / 2 * a);
        }

        System.out.println("root 1 = "+root1);
        System.out.println("root 2 = "+root2);
         
        if (sqrt<0){
            System.out.println("root 1 = "+(-b)+" + squrt("+sqrt+") /"+2*a);
            System.out.println("root 2 = "+(-b)+" - squrt("+sqrt+") /"+2*a);
        }
    }
}