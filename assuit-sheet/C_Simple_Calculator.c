// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    long int a;
    long int b;
    long long sum;
    long long mul;
    long long sub;
    
    scanf("%d", &a);
    scanf("%d", &b);
    
    sum = a + b;
    mul = a * b;
    sub = a - b;
    
    printf("%ld + %ld = %ld\n",a, b, sum);
    printf("%ld * %ld = %ld\n", a, b, mul);
    printf("%ld - %ld = %ld\n", a, b, sub);

    return 0;
}