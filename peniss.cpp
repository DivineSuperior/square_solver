#include <stdio.h>
#include <math.h>
#include <ctype.h>

int main()
{
    double a = 0;
    double b = 0;
    double c = 0;
    double discr = 0;
    double root_1 = 0;
    double root_2 = 0;

    printf("Enter the coefficient a: ");
    scanf("%lf", &a);
    printf("Enter the coefficient b: ");
    scanf("%lf", &b);
    printf("Enter the coefficient c: ");
    scanf("%lf", &c);

    double isALetter = isdigit (a);
    double isBLetter = isdigit (b);
    double isCLetter = isdigit (c);

    while ( (isALetter == 0) || (isBLetter == 0) || (isCLetter == 0) )
    {
        printf("The coefficients cannot be a letter. Try again eblan!\n");
        printf("Enter the coefficient a: ");
        scanf("%lf", &a);
        printf("Enter the coefficient b: ");
        scanf("%lf", &b);
        printf("Enter the coefficient c: ");
        scanf("%lf", &c);
    }

    while ((a == 0) || (b == 0) || (c == 0))
    {
        printf("The coefficients cannot be equal to 0. Try again dolbaeb! \n");
        printf("Enter the coefficient a: ");
        scanf("%lf", &a);
        printf("Enter the coefficient b: ");
        scanf("%lf", &b);
        printf("Enter the coefficient c: ");
        scanf("%lf", &c);
    }


    /*
    while ( (isALetter == 1) || (isBLetter == 1) || (isCLetter == 1) )
    {
        printf("The coefficients cannot be a letter. Try again eblan!\n");
        printf("Enter the coefficient a: ");
        scanf("%lf", &a);
        printf("Enter the coefficient b: ");
        scanf("%lf", &b);
        printf("Enter the coefficient c: ");
        scanf("%lf", &c);
    }
    */

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
    discr = (pow(b,2) - (4 * a * c));
    double root_discr =pow(discr,(0.5));
    if (discr < 0)
        printf("The discriminant is less than 0 so there are no roots!\n");

    if (discr == 0)
    {
        root_1 = -b / (2 * a);
        printf("The only root = %lf \n", root_1);

    }
    if (discr > 0)
    {
        root_1 = (-b + root_discr) / (2 * a);
        root_2 = (-b - root_discr) / (2 * a);
        printf("First root = %lf, Second root = %lf\n", root_1,root_2);
    }
    return 0;
}
