#include <stdio.h>
#include <math.h>

int main()
{
    printf("%.16f\n", 1.2 - 1.0 - 0.2);
    float f1 = 0.233589105;
    float f2 = 0.233589106;
    printf("f1 = %.9f\n", f1);
    printf("f2 = %.9f\n", f2);
    printf("f = %.7f\n", sqrt(f2 * f2 - f1 * f1));
}
