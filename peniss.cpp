#include <stdio.h>
#include <math.h>
#include <ctype.h>
// комменты полетели нахуй
// Ôóíêöèÿ äëÿ ïîëó÷åíèÿ êîýôôèöèåíòà îò ïîëüçîâàòåëÿ
double getCoefficient(const char* prompt) {
    double value;
    while (1) {
        printf("%s", prompt);
        if (scanf("%lf", &value) == 1) {
            break;
        } else {
            printf("Invalid input. Please enter a number.\n");
            while(getchar() != '\n'); // Î÷èñòêà áóôåðà ââîäà
        }
    }
    return value;
}

int main() {
    double a, b, c;
    double discr, root_1, root_2;

    // Ïîëó÷àåì êîýôôèöèåíòû ñ ïîìîùüþ ôóíêöèè
    a = getCoefficient("Enter the coefficient a: ");
    b = getCoefficient("Enter the coefficient b: ");
    c = getCoefficient("Enter the coefficient c: ");

    // Ïðîâåðêà íà íóëåâûå êîýôôèöèåíòû
    while ((a == 0 && b == 0 && c == 0) || (a == 0 && b == 0) || (a == 0 && c == 0) || (b == 0 && c == 0)) {
        if (a == 0 && b == 0 && c == 0) {
            printf("The solution is any number\n");
            return 0;
        }
        printf("The coefficients cannot be equal to 0. Try again dolbaeb!\n");
        a = getCoefficient("Enter the coefficient a: ");
        b = getCoefficient("Enter the coefficient b: ");
        c = getCoefficient("Enter the coefficient c: ");
    }

    // Âû÷èñëåíèå äèñêðèìèíàíòà è êîðíåé
    discr = (pow(b, 2) - (4 * a * c));
    double root_discr = pow(discr, 0.5);

    if (discr < 0) {
        printf("The discriminant is less than 0 so there are no roots!\n");
    } else if (discr == 0) {
        root_1 = -b / (2 * a);
        printf("The only root = %lf\n", root_1);
    } else {
        root_1 = (-b + root_discr) / (2 * a);
        root_2 = (-b - root_discr) / (2 * a);
        printf("First root = %lf, Second root = %lf\n", root_1, root_2);
    }

    return 0;
}
