#include<stdio.h>

typedef enum { false, true } bool;

void sshort() {
    printf("SHORT: ");
    int i, p = 0, a = 0;
    for (i = 0; i <= 100; i++){
        short prev = 0, act = 1, res = 0;
        int j;
        for (j = 0; j < i; j++) {
            res = prev + act;
            prev = act;
            act = res;
        }
        a = res;

        if(a < p) {
            printf("Overflow to SHORT in fib(%d)\nLast value: fib(%d) = %d\n\n", i, i-1, p);
            break;
        }
        p = a;
    }
}

void iinteger() {
    printf("INTEGER: ");
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
            printf("Overflow to INTEGER in fib(%d)\nLast value: fib(%d) = %d\n\n", i, i-1, p);
            break;
        }
        p = a;
    }
}

void llong() {
printf("LONG: ");
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
            printf("Overflow to LONG in fib(%d)\nLast value: fib(%d) = %ld\n\n", i, i-1, p);
            break;
        }
        p = a;
    }
}

void longlong() {
    printf("LONG LONG: ");
    int i = 0;
    long long p = 0, a = 0;
    for (i = 0; i <= 100; i++){
        long long prev = 0, act = 1, res = 0;
        int j;
        for (j = 0; j < i; j++) {
            res = prev + act;
            prev = act;
            act = res;
        }
        a = res;

        if(a < p) {
            printf("Overflow to LONG LONG in fib(%d)\nLast value: fib(%d) = %lld\n\n", i, i-1, p);
            break;
        }
        p = a;
    }
}

void ffloat() {
    printf("FLOAT: ");
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
            printf("Overflow to FLOAT in fib(%d)\nLast value: fib(%d) = %f\n\n", i, i-1, p);
            break;
        }
        p = a;
    }

    printf("Float variable doesn't overflow, but with big numbers the precision is lost. For larger values than fib(%d), the result is %f\n\n", (i - 1), a);
}

void ddouble() {
printf("DOUBLE: ");
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
            printf("Overflow to DOUBLE in fib(%d)\nLast value: fib(%d) = %f\n\n", i, i-1, p);
            break;
        }
        //printf("fib(%d) = %f\n",i,a);
        p = a;
    }

    printf("Double variable doesn't overflow, but with big numbers the precision is lost. For larger values than fib(%d), the result is %f\n\n", (i - 1), a);
}

void ldouble() {
printf("LONG DOUBLE: ");
    int i;
    long double p = 0, a = 0;
    for (i = 0; i <= 93; i++){
        long double prev = 0, act = 1, res = 0;
        int j;
        for (j = 0; j < i; j++) {
            res = prev + act;
            prev = act;
            act = res;
        }
        a = res;
        if(a < p) {
            printf("Overflow to LONG DOUBLE in fib(%d)\nLast value: fib(%d) = %Lf\n\n", i, i-1, p);
            break;
        }
        //printf("fib(%d) = %Lf\n",i,a);
        p = a;
    }
	printf("Long double variable doesn't overflow, but with big numbers the precision is lost. For larger values than fib(%d), the result is wrong (%Lf)\n\n", (i - 1), a);
}

int main() {
    FILE *f;
    f = freopen("fibonacci.out", "w", stdout);

    sshort();
    iinteger();
    llong();
    longlong();
    ffloat();
    ddouble();
    ldouble();

    fclose(f);

    return(0);
}
