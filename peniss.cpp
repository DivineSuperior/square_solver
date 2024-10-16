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
    printf("enter the coefficient a: ");
    scanf("%lf", &a);
    printf("enter the coefficient b: ");
    scanf("%lf", &b);
    printf("enter the coefficient c: ");
    scanf("%lf", &c);
    if ((a == 0) || (b == 0) || (c == 0))
    {
    printf("The coefficients cannot be equal to 0.Try again dolbaeb! \n");
    printf("enter the coefficient a: ");
    scanf("%lf", &a);
    printf("enter the coefficient b: ");
    scanf("%lf", &b);
    printf("enter the coefficient c: ");
    scanf("%lf", &c);
    }
    /*
    if ((c >= 'a') && (c <='z'))
    {
        printf("The coefficients cannot be letters. Try again debil! \n");
        printf("enter the coefficient a: ");
        scanf("%lf", &a);
        printf("enter the coefficient b: ");
        scanf("%lf", &b);
        printf("enter the coefficient c: ");
        scanf("%lf", &c);
    }
     */
    discr = pow(b,2) - (4 * a * c);
    if (discr < 0)
        printf("the discriminant is less than 0 so there are no roots!\n");
    if (discr == 0)
        {
        root_1 = -b / (2 * a);
        printf("the only root = %lf \n", root_1);
        }
    if (discr > 0   )
    {
        root_1 = (-b + pow(discr,(0.5))) / (2 * a);
        root_2 = (-b - pow(discr,(0.5))) / (2 * a);
        printf("first root = %lf, second root = %lf\n", root_1,root_2);
    }
    return 0;
}
