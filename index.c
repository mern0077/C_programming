
// question 1
// In question 1 I took input of five
//subject in form of integers. (scanf) is used 
//for input \n for next line and sum
// it into integer and then I extracted percentage 
// in form of float(decimal).
// note %0.2f mean output come in form 
// float and after decimal show at 2 digit for 
// examples (85.30)

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
// In question 2 I took input of principal, rate 
//, time in form of integer which will use
// for evaluate formula of simple interest 
// first  i multiplied principal rate time 
// in form of integer and find out simple interest 
// in form of float.
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

// In question 2 I took input of principal, rate 
//, time in form of integer which will use
// for evaluate formula of compound interest 
// first i evaluated amount and I substracted 
// amount with principal therefore compound 
// interest came.

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
//i took radius in form of float and approximate 
// of pi=3.14. and use formula of circle
// both area and Circumference 
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
// i took celcius in form of float and 
// convert into frenheit formula which is also
// inform of float 
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
// i swapped two variables using third empty 
// variable first i give value of first to third 
// using third=first and then i give first= second 
// then i give second=third which swapped.
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

// i took input of two variables and i commpared 
// both of them using conditional property if else
// if both are ewual (==) print both are equal 
// else not equal.

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
// i took three variables and compared each 
// other therefore   if (first > second && first > third)
// else if (second > first && second > third) 
// i compared both of them then third part automatically came 
// into else part
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
// i modulus number with 2 which gives reminder if 
// if (number % 2 == 0) so its even number 
// else not even number 
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
// if i do modules with 4 and its equal to
// 0 so leap year else not leap year
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

// In question 1 I took input of five
//subject in form of float. (scanf) is used 
//for input \n for next line and sum
// it into float and then I extracted percentage 
// in form of float(decimal).
// note %0.2f mean output come in form 
// float and after decimal show at 2 digit for 
// then i compared percentage if greater  than equal to 90 
// give them grade A greater equal to than 80 give 
// them B greater equal to than 60 give them C else give D


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
