#include <stdio.h>
#include <math.h>

int main()
{
    double a = 0;
    double b = 0;
    double c = 0;
    double discr = 0;
    double root_1 = 0;
    double root_2 = 0;

    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);

    discr = pow(b,2) - 4*a*c;
    root_1 = (-1*b + pow(discr,(0.5)))/2;
    root_2 = (-1*b - pow(discr,(0.5)))/2;

    printf("%lf,%lf", root_1,root_2);
    return 0;
}
