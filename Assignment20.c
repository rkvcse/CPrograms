#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
int p1()
{
    int choice;
    printf("Enter marks : ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 90 ... 100:
        printf("Grade A");
        break;
    case 80 ... 89:
        printf("Grade B");
        break;
    case 70 ... 79:
        printf("Grade C");
        break;
    case 60 ... 69:
        printf("Grade D");
        break;
    case 50 ... 59:
        printf("Grade E");
        break;
    case 0 ... 49:
        printf("Grade F");
        break;
    default:
        printf("invalid Marks");
        break;
    }
    return 0;
}

int p2()
{
    int choice, num1, num2 = 1, i;
    float r;
    do
    {
        printf("1.Factorial of a Number\n2.Check even and odd\n3.Area of circle\n4.Sum of First N natural numbers\n5.Exit\nSelect your option : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter a Number : ");
            scanf("%d", &num1);
            while (num1 > 0)
            {
                num2 *= num1;
                num1--;
            }
            printf("Factoral is : %d\n", num2);
            break;
        case 2:
            printf("Enter a Number : ");
            scanf("%d", &num1);
            if (num1 % 2)
            {
                printf("Odd num \n");
            }
            else
            {
                printf("Even num \n");
            }
            break;
        case 3:
            printf("Enter radius : ");
            scanf("%f", &r);
            printf("Area of circle is : %f\n", (22 / 7.0) * r * r);
            break;
        case 4:
            printf("Enter Number of terms: ");
            scanf("%d", &num1);
            for (i = 1, num2 = 0; i <= num1; i++)
            {
                num2 += i;
            }
            printf("sum is : %d\n", num2);
            break;
        case 5:
            exit(0);
            break;
        default:
            printf("invalid choice");
            break;
        }
    } while (choice != 5);
    return 0;
}

int p3()
{
    char choice;
    printf("Enter a character : ");
    scanf("%c", &choice);

    switch (choice)
    {
    case 'A' ... 'Z':
        printf("Uppercase alphabet");
        break;
    case 'a' ... 'z':
        printf("Lowercase alphabet");
        break;
    default:
        printf("some other character");
        break;
    }
    return 0;
}

int p4()
{
    char choice;
    printf("Enter a character : ");
    scanf("%c", &choice);

    switch (choice)
    {
    case 'A':
    case 'a':
    case 'E':
    case 'e':
    case 'I':
    case 'i':
    case 'O':
    case 'o':
    case 'U':
    case 'u':
        printf("Vowel");
        break;
    case 'B' ... 'D':
    case 'F' ... 'H':
    case 'J' ... 'N':
    case 'P' ... 'T':
    case 'V' ... 'Z':
    case 'b' ... 'd':
    case 'f' ... 'h':
    case 'j' ... 'n':
    case 'p' ... 't':
    case 'v' ... 'z':
        printf("Consonent");
        break;
    default:
        printf("some other character");
        break;
    }
    return 0;
}

int main()
{
    int choice, num1, num2, lcm, g;
    float r;
    do
    {
        printf("1.Calculate LCM of two Numbers\n2.Calculate sum of the digits of a number\n3.Volume of cuboid\n4.Check wether a given number is prime or not\n5.Exit\nSelect your option : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter two Numbers : ");
            scanf("%d %d", &num1, &num2);
            lcm = g = num1 > num2 ? num1 : num2;
            while (lcm)
            {
                if ((lcm % num1 == 0) && (lcm % num2 == 0))
                    break;
                else
                    lcm += g;
            }
            printf("LCM is : %d\n", lcm);
            break;
        case 2:
            printf("Enter a Number : ");
            scanf("%d", &num1);
            num2 = 0;
            while (num1 > 0)
            {
                lcm = num1 % 10;
                num2 += lcm;
                num1 /= 10;
            }
            printf("Sum of digits is : %d\n", num2);
            break;
        case 3:
            printf("Enter sides of a cubiod: ");
            scanf("%d%d%d", &num1, &num2, &g);
            printf("Volume of cuboid is : %d\n", num1 * num2 * g);
            break;
        case 4:
            printf("Enter a number : ");
            scanf("%d", &num1);
            for (g = 2; g < num1; g++)
            {
                if (num1 % g == 0)
                    break;
            }
            if (num1 == g)
                printf("prime nuber\n");
            else
                printf("Not prime nuber\n");
            break;
        case 5:
            exit(0);
            break;
        default:
            printf("invalid choice");
            break;
        }
    } while (choice != 5);
    return 0;
}