public class Factorial {

    public static long factorial(long number) {
        long prod = 1;
        for(long i=2;i<=number;i++) {
            prod *= i;
        }
        return prod;
    }

    public static void main(String[] args) {
        long number = 6;
        System.out.print(factorial(number));
    }

}
