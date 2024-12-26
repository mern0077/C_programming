
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


// #include <stdio.h>

// int main()
// {
//     float physics, chemistry, maths, computerScience, English;
//     printf("\nEnter marks of physics : ");
//     scanf("%f", &physics);
//     printf("\nEnter marks of chemistry : ");
//     scanf("%f", &chemistry);
//     printf("\nEnter marks of maths : ");
//     scanf("%f", &maths);
//     printf("\nEnter marks of computerScience : ");
//     scanf("%f", &computerScience);
//     printf("\nEnter marks of English : ");
//     scanf("%f", &English);

//     float sum = physics + maths + computerScience + chemistry + English;
//     float percentage = sum / 5;

//     if (percentage >= 90)
//     {
//         printf("you got grade 'A' with %.2f", percentage);
//     }
//     else if (percentage >= 80)
//     {
//         printf("you got grade 'B' with %.2f", percentage);
//     }
//     else if (percentage >= 60)
//     {
//         printf("you got grade 'C' with %.2f", percentage);
//     }
//     else
//     {
//         printf("you got grade 'D' with %.2f", percentage);
//     }

//     return 0;
// }


// =========================================================================================================

// question 11

// #include <stdio.h>

// int main()
// {
//     float val1, val2;
//     char operator;
//     printf("Enter value first : ");
//     scanf("%f", &val1);
//     printf("Enter operator : ");
//     scanf("%s", &operator);
//     printf("Enter value second : ");
//     scanf("%f", &val2);
//     switch (operator)
//     {
//     case '+':
//         printf("Addition : %.2f", val1 + val2);
//         break;
//     case '-':
//         printf("Substraction : %.2f", val1 - val2);
//         break;
//     case 'x':
//         printf("Substraction : %.2f", val1 * val2);
//         break;
//     case '/':
//         printf("Substraction : %.2f", val1 / val2);
//         break;

//     default:
//         break;
//     }
//     return 0;
// }

// =========================================================================================================

// question 12
// #include <stdio.h>

// int main()
// {
//     int sum = 0, number;
//     printf("Enter number (it will give you sum at that number) : ");
//     scanf("%d", &number);
//     for (int i = 0; i <= number; i++)
//     {
//         sum += i;
//     }
//     printf("sum at nth number : %d", sum);
//     return 0;
// }

// =========================================================================================================

// question 13
// #include <stdio.h>

// int main()
// {
//     int sum = 0, number;
//     printf("Enter number (it will give you sum at that number) : ");
//     scanf("%d", &number);
//     for (int i = 0; i <= number; i++)
//     {
//         sum += i;
//     }
//     printf("sum at nth number : %d", sum);
//     return 0;
// }

// =========================================================================================================

// question 14
// #include <stdio.h>

// int fibo();

// int main()
// {
//     int number;
//     printf("Enter fibonacci number : ");
//     scanf("%d", &number);
//     printf("fibonacci value is : %d",fibo(number));
//     return 0;
// }

// int fibo(int n)
// {
//     if (n == 0 || n == 1)
//     {
//         return 1;
//     }
//     else
//     {
//         int sum = fibo(n - 1) + fibo(n - 2);
//         return sum;
//     }
// }


// =========================================================================================================

// question 15
// #include <stdio.h>

// int main()
// {
//     int number;
//     printf("Enter prime number : ");
//     scanf("%d", &number);
//     for (int i = 2; i < number; i++)
//     {
//         if (number % i != 0)
//         {
//             printf("Prime number");
//             break;
//         }
//         else
//         {
//             printf("not a prime number");
//             break;
//         }
//     }

//     return 0;
// }


// =========================================================================================================

// question 16
// #include <stdio.h>
// #include <string.h>

// // Define the key-value pair structure
// struct keyValuePair
// {
//     char key[50];
//     int value;
// };

// int main()
// {
//     // Initialize the key-value pairs
//     struct keyValuePair Pairs[] = {
//         {"first", 1},
//         {"second", 2},
//         {"third", 3},
//         {"four", 4},
//         {"five", 5},
//         {"six", 6},
//         {"seven", 7},
//         {"eight", 8},
//         {"nine", 9},
//         {"zero", 0},
//     };

//     char name1[50], name2[50];

//     // Get user input
//     printf("Enter number in words: ");
//     scanf("%s", name1); // Take input for the first number

//     printf("Enter number in words: ");
//     scanf("%s", name2); // Take input for the second number

//     // Find the corresponding values for name1 and name2
//     int value1 = -1, value2 = -1;

//     // Search for the value of name1
//     for (int i = 0; i < 10; i++)
//     {
//         if (strcmp(Pairs[i].key, name1) == 0)
//         {
//             value1 = Pairs[i].value;
//             break;
//         }
//     }

//     // Search for the value of name2
//     for (int i = 0; i < 10; i++)
//     {
//         if (strcmp(Pairs[i].key, name2) == 0)
//         {
//             value2 = Pairs[i].value;
//             break;
//         }
//     }

//     // If both values were found, calculate the sum
//     if (value1 != -1 && value2 != -1)
//     {
//         printf("Sum is: %d\n", value1 + value2);
//     }
//     else
//     {
//         printf("Invalid input. Please enter valid number words.\n");
//     }

//     return 0;
// }


// =========================================================================================================

// question 17
// #include <stdio.h>

// void reverseArray(int *arr, int len)
// {
//     int start = 0;
//     int end = len - 1;
//     while (start < end)
//     {
//         int temp = arr[end];   // Save the value at the end
//         arr[end] = arr[start]; // Assign the value at the start to the end
//         arr[start] = temp;     // Assign the saved value (temp) to the start
//         end--;
//         start++;
//     }
// }

// void printArray(int *arr, int len)
// {
//     for (int i = 0; i < len; i++)
//     {
//         printf("%d ", arr[i]); // Corrected format for printing
//     }
//     printf("\n");
// }

// int main()
// {
//     int arr[5] = {1, 4, 5, 7, 3};
//     int len = 5;
//     reverseArray(arr, len); // Reverse the array and print it
//     printArray(arr, len);
//     return 0;
// }

// =========================================================================================================

// question 18
// #include <stdio.h>
// #include <math.h>
// #include <string.h>

// // Function to convert binary to decimal
// int binaryToDecimal(char *binary)
// {
//     int decimal = 0;
//     int length = strlen(binary);

//     // Loop through the binary string
//     for (int i = 0; i < length; i++)
//     {
//         if (binary[i] == '1')
//         {
//             decimal += pow(2, length - i - 1);
//         }
//     }

//     return decimal;
// }

// // Function to convert decimal to binary
// void decimalToBinary(int decimal)
// {
//     int binary[32]; // Array to hold binary number (32 bits)
//     int index = 0;

//     // Special case for 0
//     if (decimal == 0)
//     {
//         printf("0");
//         return;
//     }

//     // Convert decimal to binary
//     while (decimal > 0)
//     {
//         binary[index++] = decimal % 2;
//         decimal = decimal / 2;
//     }

//     // Print the binary number in reverse order
//     for (int i = index - 1; i >= 0; i--)
//     {
//         printf("%d", binary[i]);
//     }
// }

// int main()
// {
//     char binary[32];
//     int decimal;

//     // Binary to decimal
//     printf("Enter a binary number: ");
//     scanf("%s", binary);
//     int decimalResult = binaryToDecimal(binary);
//     printf("Binary %s to Decimal is: %d\n", binary, decimalResult);

//     // Decimal to binary
//     printf("Enter a decimal number: ");
//     scanf("%d", &decimal);
//     printf("Decimal %d to Binary is: ", decimal);
//     decimalToBinary(decimal);
//     printf("\n");

//     return 0;
// }


// =========================================================================================================

// question 19
// #include <stdio.h>

// int main()
// {
//     int arr[8], len = 8;
//     for (int i = 0; i < len; i++)
//     {
//         printf("Enter a decimal number: ");
//         scanf("%d", &arr[i]);
//     }

//     return 0;
// }
