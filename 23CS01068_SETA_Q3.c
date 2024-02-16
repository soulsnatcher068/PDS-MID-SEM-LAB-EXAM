// roots of a quadratic equation ax^2+bx+c
#include <stdio.h>
#include <math.h>
void main()
{
    double a, b, c;
    printf("\nEnter coeff of x^2,x^1,x^0 (a,b,c) = ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a == 0) //Coefficient for a quadratic equation cannot be 0
        printf("\nInvalid input");
    else
    {
        double D = b * b - 4 * a * c;//discriminant
        //Checking the sign of discriminant and calculating roots if positive
        if (D < 0)
            printf("\nImaginary roots");
        else
        {
            double root1, root2;
            //using quadratic root formula 
            root1 = (-b + pow(D, 0.5)) / (2 * a);
            root2 = (-b - pow(D, 0.5)) / (2 * a);
            printf("Roots are %lf %lf", root1, root2);
        }
    }
}

/*OUTPUTS
Enter coeff of x^2,x^1,x^0 (a,b,c) = 0 6 9

Invalid input


Enter coeff of x^2,x^1,x^0 (a,b,c) = 1 1 1

Imaginary roots

Enter coeff of x^2,x^1,x^0 (a,b,c) = 1 2 1
Roots are -1.000000 -1.000000



*/