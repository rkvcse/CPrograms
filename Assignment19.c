#include <stdio.h>
#include <stdlib.h>
int p1()
{
    int month;
    printf("Enter Month no. : ");
    scanf("%d", &month);
    switch (month)
    {
    case 1:
        printf("31 days");
        break;
    case 2:
        printf("30 days");
        break;
    case 3:
        printf("28 or 29 days");
        break;
    case 4:
        printf("31 days");
        break;
    case 5:
        printf("30 days");
        break;
    case 6:
        printf("31 days");
        break;
    case 7:
        printf("30 days");
        break;
    case 8:
        printf("31 days");
        break;
    case 9:
        printf("30 days");
        break;
    case 10:
        printf("31 days");
        break;
    case 11:
        printf("30 days");
        break;
    case 12:
        printf("31 days");
        break;

    default:
        printf("invalid month");
        break;
    }
    return 0;
}
int p2()
{
    int choice;
    float num1, num2;
    do
    {
        printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Exit\nSelect your option : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter two Number : ");
            scanf("%f%f", &num1, &num2);
            printf("Addition is : %f\n", num1 + num2);
            break;
        case 2:
            printf("Enter two Number : ");
            scanf("%f%f", &num1, &num2);
            printf("Subtraction is : %f\n", num1 - num2);
            break;
        case 3:
            printf("Enter two Number : ");
            scanf("%f%f", &num1, &num2);
            printf("Multiplication is : %f\n", num1 * num2);
            break;
        case 4:
            printf("Enter two Number : ");
            scanf("%f%f", &num1, &num2);
            printf("Division is : %f\n", num1 / num2);
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
    int choice;

    printf("Enter day number of week : ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("Happy MONDAY");
        break;
    case 2:
        printf("Happy TUESDAY");
        break;
    case 3:
        printf("Happy WEDNESDAY");
        break;
    case 4:
        printf("Happy THRUSDAY");
        break;
    case 5:
        printf("Happy FRIDAY");
        break;
    case 6:
        printf("Happy SATURDAY");
        break;
    case 7:
        printf("Happy SUNDAY");
        break;
    default:
        printf("invalid choice");
        break;
    }

    return 0;
}
int p4()
{
    int choice;
    float a, b, c;
    printf("1.Check whether a given set of three numbers are lengths of an isoceles triangle or not : \n");
    printf("2.Check whether a given set of three numbers are lengths of an right angle triangle or not : \n");
    printf("3.Check whether a given set of three numbers are lengths of an equilateral triangle or not : \n");
    printf("4.Exit : \n");
    printf("Select Your choice : ");
    scanf("%d", &choice);
    if (choice > 0 && choice < 4)
    {
        printf("enter three sides of triangle : ");
        scanf("%f%f%f", &a, &b, &c);
        if (a && b && c && (a + b > c && b + c > a && c + a > b)){

        }
        else
        {
            printf("Invalid triangle sides");
            exit(0);
        }
    }
    switch (choice)
    {
    case 1:
        if (a == b || b == c || c == a){
            printf("Isoceles triagle");
        }else{
            printf("Not Isoceles triagle");
        }
            break;
    case 2:
        if ((a*a+b*b==c*c)||(c*c+b*b==a*a)||(a*a+c*c==b*b)){
            printf("Right angle triagle");
        }else{
            printf("Not Right angle triagle");
        }
        break;
    case 3:
        if (a == b == c){
            printf("Equilateral triagle");
        }else{
            printf("Not Equilateral triagle");
        }
        break;
    case 4:
        exit(0);
        break;
    default:
        printf("invalid choice");
        break;
    }

    return 0;
}

int main()
{
    int choice;

    printf("Enter a number : ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("good");
        break;
    case 2:
        printf("better");
        break;
    case 3:
        printf("best");
        break;
    default:
        printf("invalid");
        break;
    }

    return 0;
}