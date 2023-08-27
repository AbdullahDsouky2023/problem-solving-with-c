#include <stdio.h>
#include <math.h>
/**
 * main - The following lines show some C++ data types,
 *  their format specifiers and their most common bit widths:
 *
 *  Return: always 0
*/
int main() {
    int a;
    long long b;
    char c;
    float d;
    double e;

    scanf("%d %lld %c %f %lf",&a ,&b ,&c ,&d ,&e);
    printf("%d\n",a);
    printf("%lld\n",b);
    printf("%c\n",c);
    printf("%.2f\n",d);
    printf("%.1f\n",e);

    return (0);
}
