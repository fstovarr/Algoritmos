import java.io.FileOutputStream;
import java.io.PrintStream;

public class Fibonacci {

    public static void sshort() {
        System.out.format("SHORT: ");
        int i, p = 0, a = 0;
        for (i = 0; i <= 100; i++){
            short prev = 0, act = 1, res = 0;
            int j;
            for (j = 0; j < i; j++) {
                res = (short) (prev + act);
                prev = act;
                act = res;
            }
            a = res;

            if(a < p) {
                System.out.format("Overflow to SHORT in fib(%d)\nLast value: fib(%d) = %d\n\n", i, i-1, p);
                break;
            }
            p = a;
        }
    }

    public static void iinteger() {
        System.out.format("INTEGER: ");
        int i, p = 0, a = 0;
        for (i = 0; i <= 100; i++){
            int prev = 0, act = 1, res = 0;
            int j;
            for (j = 0; j < i; j++) {
                res = prev + act;
                prev = act;
                act = res;
            }
            a = res;
            if(a < p) {
                System.out.format("Overflow to INTEGER in fib(%d)\nLast value: fib(%d) = %d\n\n", i, i-1, p);
                break;
            }
            p = a;
        }
    }

    public static void llong() {
        System.out.format("LONG: ");
        int i;
        long p = 0, a = 0;
        for (i = 0; i <= 100; i++){
            long prev = 0, act = 1, res = 0;
            int j;
            for (j = 0; j < i; j++) {
                res = prev + act;
                prev = act;
                act = res;
            }

            a = res;
            if(a < p) {
                System.out.format("Overflow to LONG in fib(%d)\nLast value: fib(%d) = %d\n\n", i, i-1, p);
                break;
            }
            p = a;
        }
    }

    public static void ffloat() {
        System.out.format("FLOAT: ");
        int i;
        float p = 0, a = 0;

        for (i = 0; i <= 186; i++){
            float prev = 0, act = 1, res = 0;
            int j;
            for (j = 0; j < i; j++) {
                res = prev + act;
                prev = act;
                act = res;
            }
            a = res;

            if(a < p) {
                System.out.format("Overflow to FLOAT in fib(%d)\nLast value: fib(%d) = %f\n\n", i, i-1, p);
                break;
            }
            p = a;
        }

        System.out.format("Float variable doesn't overflow, but with big numbers the precision is lost. For larger values than fib(%d), the result is %f\n\n", (i - 1), a);
    }

    public static void ddouble() {
        System.out.format("DOUBLE: ");
        int i;
        double p = 0, a = 0;
        for (i = 0; i <= 1476; i++){
            double prev = 0, act = 1, res = 0;
            int j;
            for (j = 0; j < i; j++) {
                res = prev + act;
                prev = act;
                act = res;
            }
            a = res;
            if(a < p) {
                System.out.format("Overflow to DOUBLE in fib(%d)\nLast value: fib(%d) = %f\n\n", i, i-1, p);
                break;
            }
            //System.out.format("fib(%d) = %f\n",i,a);
            p = a;
        }

        System.out.format("Double variable doesn't overflow, but with big numbers the precision is lost. For larger values than fib(%d), the result is %f\n\n", (i - 1), a);
    }

    public static void main(String[] args) {
        try{
            System.setOut(new PrintStream(new FileOutputStream("FibonacciJava.out")));
        } catch (Exception e ) {
            e.printStackTrace();
        }

        sshort();
        iinteger();
        llong();
        ffloat();
        ddouble();

    }
}
