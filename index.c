
// question 1

// #include <stdio.h>

// int main()
// {
//     int physics, chemistry, maths, computerScience, English;
//     printf("\nEnter marks of physics : ");
//     scanf("%d", &physics);
//     printf("\nEnter marks of chemistry : ");
//     scanf("%d", &chemistry);
//     printf("\nEnter marks of maths : ");
//     scanf("%d", &maths);
//     printf("\nEnter marks of computerScience : ");
//     scanf("%d", &computerScience);
//     printf("\nEnter marks of English : ");
//     scanf("%d", &English);

//     int sum = physics + maths + computerScience + chemistry + English;
//     float percentage = (float)sum / 5;

//     printf("\nThe sum of marks is : %d", sum);
//     printf("\npercentage of marks is : %0.2f", percentage);

//     return 0;
// }

// ----------------------------------------------------------------------------------

// quesion 2
//  simple interest
//  #include <stdio.h>

// int main()
// {
//     int principle, rate, time;
//     printf("Amount of principle : ");
//     scanf("%d", &principle);
//     printf("Rate in percentage : ");
//     scanf("%d", &rate);
//     printf("time in years : ");
//     scanf("%d", &time);

//     int total = principle * rate * time;
//     float simpleInterest = (float)(total) / 100;
//     printf("simple Interest : %0.2f", simpleInterest);

//     return 0;
// }

// compound interest
// #include <stdio.h>
// #include <math.h>

// int main()
// {
//     float principle, rate, time;
//     printf("Amount of principle : ");
//     scanf("%f", &principle);
//     printf("Rate on principle : ");
//     scanf("%f", &rate);
//     printf("time in years : ");
//     scanf("%f", &time);
//     float amount = principle * pow((1 + rate / 100), time);
//     float compoundInterest = amount - principle;
//     printf("compound Interest : %.2f", compoundInterest);
//     return 0;
// }

// =========================================================================================================

// question 3

// #include <stdio.h>
// #include <math.h>

// int main()
// {
//     float pi = 3.14, radius;
//     printf("Radius of circle : ");
//     scanf("%f", &radius);
//     printf("\nCircumference of circle : %.2f", 2 * pi * radius);
//     printf("\nArea of circle : %.2f", pi * pow(radius, 2));
//     return 0;
// }

// =========================================================================================================

// question 4

// #include <stdio.h>

// int main()
// {
//     float celsius;
//     printf("Enter celcius : ");
//     scanf("%f", &celsius);
//     float fahrenheit = (celsius * 9 / 5) + 32;
//     printf("Temperature in Fahrenheit : %.2f", fahrenheit);
//     return 0;
// }

// =========================================================================================================

// question 5

// #include <stdio.h>

// int main()
// {
//     int first = 2, second = 5, third=0;
//     printf("\nfirst %d and second %d",first,second);
//     third=first;
//     first = second;
//     second = third;
//     printf("\nfirst %d and second %d",first,second);
// }

// =========================================================================================================

// question 6

// #include <stdio.h>

// int main()
// {
//     int first, second;
//     printf("Enter first : ");
//     scanf("%d", &first);
//     printf("Enter second : ");
//     scanf("%d", &second);
//     if (first == second)
//     {
//         printf("Both are equal");
//     }
//     else
//     {
//         printf("Both are not equal");
//     }
// }

// =========================================================================================================

// question 7

// #include <stdio.h>

// int main()
// {
//     int first = 10, second = 5, third = 3;
//     if (first > second && first > third)
//     {
//         printf("First is greater");
//     }
//     else if (second > first && second > third)
//     {
//         printf("Second is greater");
//     }
//     else
//     {
//         printf("Third is greater");
//     }
// }

// =========================================================================================================

// question 8

// #include <stdio.h>

// int main()
// {
//     int number = 22;
//     if (number % 2 == 0)
//     {
//         printf("Even number");
//     }
//     else
//     {
//         printf("Odd number");
//     }
// }

// =========================================================================================================

// question 9

// #include <stdio.h>

// int main()
// {
//     int number = 2025;
//     if (number % 4 == 0)
//     {
//         printf("leap year");
//     }
//     else
//     {
//         printf("not a leap year");
//     }
// }

// =========================================================================================================

// question 10

#include <stdio.h>

int main()
{
    float physics, chemistry, maths, computerScience, English;
    printf("\nEnter marks of physics : ");
    scanf("%f", &physics);
    printf("\nEnter marks of chemistry : ");
    scanf("%f", &chemistry);
    printf("\nEnter marks of maths : ");
    scanf("%f", &maths);
    printf("\nEnter marks of computerScience : ");
    scanf("%f", &computerScience);
    printf("\nEnter marks of English : ");
    scanf("%f", &English);

    float sum = physics + maths + computerScience + chemistry + English;
    float percentage = sum / 5;

    if (percentage >= 90)
    {
        printf("you got grade 'A' with %.2f", percentage);
    }
    else if (percentage >= 80)
    {
        printf("you got grade 'B' with %.2f", percentage);
    }
    else if (percentage >= 60)
    {
        printf("you got grade 'C' with %.2f", percentage);
    }
    else
    {
        printf("you got grade 'D' with %.2f", percentage);
    }

    return 0;
}
