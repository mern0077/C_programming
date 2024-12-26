
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
// it takes three input from user val1,val2 and operator
// so val1 for numrator operator for specific tast with switch
// case then val2 for denominator.

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
// it take number input from user then sum it using loop
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
// it take position of fibonacci series then its print 
// data using recursion which replicate itself. it sums 
// value fibo=fibo(number-1)+fibo(number-2);

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

// question 14
// it check prime number from 2 to input value
// then if input value equal to zero so not prime 
//else prime.
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

// question 15
// it used object ( key value pair ) when input value gave
// so his value point that value hence it converted into number.
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

// question 16
// we create a temp which store end value
//then end value assined initial value then
// initial value assigned starting value.
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

// question 17

// we are doing traverse so if binary equal to 1
// so it will power of it then sum it.
// we are doing LCM so it will convert into binary

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

// question 18
// it reverse number using modulus for value reverse for insert
// n/10 for delete copy value. 

// #include <stdio.h>
// int main()
// {
//     int n, reverse = 0, rem;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     while (n != 0)
//     {
//         rem = n % 10;
//         reverse = reverse * 10 + rem;
//         n /= 10;
//     }
//     printf("Reversed Number: %d", reverse);
//     return 0;
// }

// =========================================================================================================

// question 19

//"All Armstrong number between 1 and 1000 are:\n");
//"yeh to khud se likh yash padh ke"

// #include <math.h>
// #include <stdio.h>

// int main()
// {
//     int i, sum, num, count = 0;
//     printf(
//         "All Armstrong number between 1 and 1000 are:\n");

//     for (i = 1; i <= 100; i++)
//     {
//         num = i;
//         // Count number of digits.
//         while (num != 0)
//         {
//             num /= 10;
//             count++;
//         }
//         num = i;
//         sum = pow(num % 10, count) + pow((num % 100 - num % 10) / 10, count) + pow((num % 1000 - num % 100) / 100, count);

//         if (sum == i)
//         {
//             printf("%d ", i);
//         }
//         count = 0;
//     }
// }


// =========================================================================================================

// question 19
//long long for manupulate large amount of data. it take binary number
// and give you decimal value using square of 1 and sum of spuare. 

// #include <stdio.h>

// long long convert(long long);

// int main()
// {

//     long long n;

//     printf("Enter a binary number: ");
//     scanf("%lld", &n);

//     printf("%lld in binary = %lld in decimal", n, convert(n));

//     return 0;
// }

// long long convert(long long n)
// {

//     long long dec = 0;
//     int i = 0, rem;

//     while (n != 0)
//     {

//         rem = n % 10;

//         dec += rem << i;

//         n /= 10;

//         ++i;
//     }

//     return dec;
// }

// =========================================================================================================

// question 20
// it take size of array and we insert data into array then it will do sum using linear search.

// #include <stdio.h>

// int main()
// {
//     int arr[100], size, i, sum = 0;

//     printf("Enter array size\n");
//     scanf("%d", &size);

//     printf("Enter array elements\n");
//     for (i = 0; i < size; i++)
//         scanf("%d", &arr[i]);

//     for (i = 0; i < size; i++)
//         sum = sum + arr[i];

//     printf("Sum of the array = %d\n", sum);

//     return 0;
// }

// =========================================================================================================

// question 21
//  it take size of two array and we insert data into array then it will do sum using linear search both of them together.
// #include <stdio.h>

// int main()
// {
//     int a[50], b[50], sum[50], i, n;

//     printf("Enter the number of elements in the arrays: ");
//     scanf("%d", &n);

//     printf("Enter the elements of 1st array: ");
//     for (i = 0; i < n; i++)
//         scanf("%d", &a[i]);

//     printf("Enter the elements of 2nd array: ");
//     for (i = 0; i < n; i++)
//         scanf("%d", &b[i]);

//     for (i = 0; i < n; i++)
//         sum[i] = a[i] + b[i];

//     printf("Sum of the corresponding elements of 1st and 2nd arrays: ");
//     for (i = 0; i < n; i++)
//         printf("%d ", sum[i]); 

//     return 0;
// }

// =========================================================================================================

// question 22
// it take array and first value for min and max value then using for loop it will compare min and max
// if value is greate it will goes max else it will goes in min

// #include <stdio.h>

// int main() {
//     int a[50], n, i;
//     int min, max;

//     // Input the number of elements
//     printf("Enter the number of elements in the array: ");
//     scanf("%d", &n);

//     // Input the array elements
//     printf("Enter the elements of the array: ");
//     for (i = 0; i < n; i++) {
//         scanf("%d", &a[i]);
//     }

//     // Assume the first element is both min and max
//     min = a[0];
//     max = a[0];

//     // Loop to find min and max
//     for (i = 1; i < n; i++) {
//         if (a[i] < min) {
//             min = a[i]; // Update min
//         }
//         if (a[i] > max) {
//             max = a[i]; // Update max
//         }
//     }

//     // Output the minimum and maximum values
//     printf("The minimum value in the array is: %d\n", min);
//     printf("The maximum value in the array is: %d\n", max);

//     return 0;
// }





// =========================================================================================================

// question 23
// we will find out index using search, we use linear search
// which traverse each array if array[c] equal to search print i
// else print "not found"

// #include <stdio.h>
// int main()
// {
//     int array[100], search, c, number;
//     printf("Enter the number of elements in array\n");
//     scanf("%d", &number);
//     printf("Enter %d numbers\n", number);
//     for (c = 0; c < number; c++)
//         scanf("%d", &array[c]);
//     printf("Enter the number to search\n");
//     scanf("%d", &search);
//     for (c = 0; c < number; c++)
//     {
//         if (array[c] == search)
//         {
//             printf("%d is present at location %d.\n", search, c + 1);
//             break;
//         }
//     }
//     if (c == number)
//         printf("%d is not present in array.\n", search);
//     return 0;
// }

// =========================================================================================================

// question 24
// Compare and swap the adjacent elements if they are in the wrong order starting from the first two elements.
// Do that for all elements moving from left to right. We will get the largest element at the right end.

// #include <stdio.h>

// void swap(int *arr, int i, int j)
// {
//     int temp = arr[i];
//     arr[i] = arr[j];
//     arr[j] = temp;
// }

// void bubbleSort(int arr[], int n)
// {
//     for (int i = 0; i < n - 1; i++)
//     {
//         for (int j = 0; j < n - i - 1; j++)
//         {
//             if (arr[j] > arr[j + 1])
//                 swap(arr, j, j + 1);
//         }
//     }
// }

// int main()
// {
//     int arr[] = {6, 0, 3, 5};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     // Calling bubble sort on array arr
//     bubbleSort(arr, n);

//     for (int i = 0; i < n; i++)
//         printf("%d ", arr[i]);

//     return 0;
// }

// =========================================================================================================

// question 25
// add and multiply two compatible matrices
// I add and multiply when arr1[i][j]==arr2[i][j]

// #include <stdio.h>
// #include <conio.h>
// void main()
// {
//     int a[3][3], b[3][3], c[3][3] = {0}, d[3][3] = {0};
//     int i, j, k, m, n, p, q;
//     printf("Enter no. of rows and columns in matrix A: ");
//     scanf("%d%d", &m, &n);
//     printf("Enter no. of rows and columns in matrix B: ");
//     scanf("%d%d", &p, &q);
//     if (m != p || n != q)
//     {
//         printf("Matrix Addition is not possible");
//         return;
//     }
//     else if (n != p)
//     {
//         printf("Matrix Multiplication is not possible");
//         return;
//     }
//     else
//     {
//         printf("Enter elements of matrix A: ");
//         for (i = 0; i < m; i++)
//             for (j = 0; j < n; j++)
//                 scanf("%d", &a[i][j]);
//         printf("Enter elements of matrix B: ");
//         for (i = 0; i < p; i++)
//             for (j = 0; j < q; j++)
//                 scanf("%d", &b[i][j]);
//         // Matrix Addition
//         for (i = 0; i < m; i++)
//             for (j = 0; j < n; j++)
//                 c[i][j] = a[i][j] + b[i][j];
//         printf("\nResult of Matirx Addition:\n");
//         for (i = 0; i < m; i++)
//         {
//             for (j = 0; j < n; j++)
//                 printf("%d ", c[i][j]);
//             printf("\n");
//         }
//         // Matrix Multiplication
//         for (i = 0; i < m; i++)
//             for (j = 0; j < q; j++)
//                 for (k = 0; k < p; k++)
//                     d[i][j] += a[i][k] * b[k][j];
//         printf("\nResult of Matirx Multiplication:\n");
//         for (i = 0; i < m; i++)
//         {
//             for (j = 0; j < q; j++)
//                 printf("%d ", d[i][j]);
//             printf("\n");
//         }
//     }
//     getch();
// }


// =========================================================================================================

// question 26

// we added digonal matrix and off-diognal matrix

// #include <stdio.h>

// int main()
// {

//     int i, j, m = 3, n = 3, a = 0, sum = 0;

//     int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

//     if (m == n)
//     {

//         printf("The matrix is \n");

//         for (i = 0; i < m; ++i)
//         {

//             for (j = 0; j < n; ++j)
//             {
//                 printf(" %d", matrix[i][j]);
//             }
//             printf("\n");
//         }
//         for (i = 0; i < m; ++i)
//         {

//             sum = sum + matrix[i][i];

//             a = a + matrix[i][m - i - 1];
//         }

//         printf("\nMain diagonal elements sum is = %d\n", sum);
//         printf("Off-diagonal elements sum is = %d\n", a);
//     }
//     else

//         printf("not a square matrix\n");
//     return 0;
// }


// =========================================================================================================

// question 27

// strlen is build in function which is use for find length of char,
// strcpy is build in function which is use for copy value into  other char,

// #include <stdio.h>

// int main()
// {
//     char str[] = "Hello, World!";
//     int len = strlen(str);
//     printf("The length of the string is: %d", len);
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     char src[] = "Hello, World!";
//     char dest[20];
//     strcpy(dest, src);
//     printf("The copied string is: %s", dest);
//     return 0;


// =========================================================================================================

// question 28

// this is project.

// Train no: int

// Train NAME: String

// Departure Time: Aggregate type TIME

// Arrival time: Aggregate type TIME

// Strat Station: String

// End Station: String

// #include <stdio.h>
// #include <string.h>

// #define MAX 50

// typedef struct TIME
// {
//     int hour;
//     int minute;
// } TIME;

// typedef struct TRAIN_INFO
// {
//     int train_no;
//     char train_name[35];
//     char start_st[35];
//     char end_st[35];
//     TIME dept_time;
//     TIME arr_time;
// } TRAIN;

// void train_edit(TRAIN *, int *);

// int main(void)
// {
//     int no_of_trains = 0;
//     int i;
//     int choice;
//     char dept_st[35];
//     char arr_st[35];
//     TIME train_time;
//     TRAIN train[MAX];

//     train_edit(train, &no_of_trains);

//     while (1)
//     {
//         // Display Main Menu
//         printf("\t\t\t * ***MENU * ***\n");
//         printf("1. List all the trains departed from a particular station.\n");
//         printf("2. List all the trains departed from a particular station at a particular time.\n");
//         printf("3. List all the trains departed from particular station within the next one hour of a given time.\n");
//         printf("4. List all the trains between a pair of start station and end station.\n");
//         printf("5. Edit train details.\n");
//         printf("6. Exit.\n");
//         printf("Your choice : ");

//         // Input choice
//         scanf("%d", &choice);

//         switch (choice)
//         {
//         case 1:
//             printf("\n\t\t * ***INPUT DETAILS * ***\n");
//             printf("Depart Station : ");
//             getchar(); // Clear the newline left by previous scanf
//             fgets(dept_st, sizeof(dept_st), stdin);
//             dept_st[strcspn(dept_st, "\n")] = 0;

//             // Print trains
//             for (i = 0; i < no_of_trains; i++)
//             {
//                 if (strcmp(train[i].start_st, dept_st) == 0)
//                 {
//                     printf("%d\t\t%s\t%s\t%s\t%d:%d\t%d:%d\n", train[i].train_no, train[i].train_name,
//                            train[i].start_st, train[i].end_st, train[i].dept_time.hour,
//                            train[i].dept_time.minute, train[i].arr_time.hour, train[i].arr_time.minute);
//                 }
//             }
//             break;
//         case 2:
//             printf("\n\t\t * ***INPUT DETAILS * ***\n");
//             printf("Depart Station : ");
//             getchar();
//             fgets(dept_st, sizeof(dept_st), stdin);
//             dept_st[strcspn(dept_st, "\n")] = 0;
//             printf("Train Time : \n");
//             printf("Hour : ");
//             scanf("%d", &train_time.hour);
//             printf("Minute : ");
//             scanf("%d", &train_time.minute);

//             // Print trains
//             for (i = 0; i < no_of_trains; i++)
//             {
//                 if (strcmp(train[i].start_st, dept_st) == 0 && train[i].dept_time.hour == train_time.hour && train[i].dept_time.minute == train_time.minute)
//                 {
//                     printf("%d\t\t%s\t%s\t%s\t%d:%d\t%d:%d\n", train[i].train_no,
//                            train[i].train_name, train[i].start_st, train[i].end_st,
//                            train[i].dept_time.hour, train[i].dept_time.minute,
//                            train[i].arr_time.hour, train[i].arr_time.minute);
//                 }
//             }
//             break;
//         // Add the other cases as they are
//         case 6:
//             return 0;
//         default:
//             printf("\nError! Wrong Choice.\n\n");
//         }
//     }
//     return 0;
// }

// void train_edit(TRAIN *train, int *no_of_trains)
// {
//     int choice, i, train_num;
//     TRAIN temp;
//     while (1)
//     {
//         printf("\t\t * ***TRAIN EDIT MENU * ***\n");
//         printf("1. Add Train.\n");
//         printf("2. Delete Train.\n");
//         printf("3. Exit Train Edit Menu.\n");
//         printf("Your Choice : ");
//         scanf("%d", &choice);

//         switch (choice)
//         {
//         case 1:
//             if (*no_of_trains >= MAX)
//             {
//                 printf("\nError! There are already maximum trains.\n\n");
//                 break;
//             }

//             printf("\nInput Train Number : ");
//             scanf("%d", &temp.train_no);

//             for (i = 0; i < *no_of_trains; i++)
//             {
//                 if (train[i].train_no == temp.train_no)
//                 {
//                     printf("Error! Train number %d already exists. Please try again.\n\n", temp.train_no);
//                     break;
//                 }
//             }
//             if (i != *no_of_trains)
//                 break;

//             printf("Input Train Name : ");
//             getchar(); // Clear the newline left by previous scanf
//             fgets(temp.train_name, sizeof(temp.train_name), stdin);
//             temp.train_name[strcspn(temp.train_name, "\n")] = 0;

//             printf("Input Start Station : ");
//             fgets(temp.start_st, sizeof(temp.start_st), stdin);
//             temp.start_st[strcspn(temp.start_st, "\n")] = 0;

//             printf("Input End Station : ");
//             fgets(temp.end_st, sizeof(temp.end_st), stdin);
//             temp.end_st[strcspn(temp.end_st, "\n")] = 0;

//             printf("Input Departure Time : \n");
//             printf("Hour : ");
//             scanf("%d", &temp.dept_time.hour);
//             printf("Minute : ");
//             scanf("%d", &temp.dept_time.minute);

//             printf("Input Arrival Time : \n");
//             printf("Hour : ");
//             scanf("%d", &temp.arr_time.hour);
//             printf("Minute : ");
//             scanf("%d", &temp.arr_time.minute);

//             train[*no_of_trains] = temp;
//             (*no_of_trains)++;

//             printf("Train %d added successfully.\n\n", temp.train_no);
//             break;
//         case 2:
//             if (*no_of_trains == 0)
//             {
//                 printf("\nError! No Train Available.\n\n");
//                 break;
//             }

//             printf("\nInput Train Number : ");
//             scanf("%d", &train_num);

//             for (i = 0; i < *no_of_trains; i++)
//             {
//                 if (train[i].train_no == train_num)
//                 {
//                     for (int j = i; j < *no_of_trains - 1; j++)
//                     {
//                         train[j] = train[j + 1];
//                     }
//                     (*no_of_trains)--;
//                     printf("Train %d deleted successfully.\n\n", train_num);
//                     break;
//                 }
//             }
//             break;
//         case 3:
//             return;
//         default:
//             printf("\nError! Wrong Choice.\n\n");
//         }
//     }
// }


// =========================================================================================================

// question 29

// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>

// void compareFiles(FILE *file1, FILE *file2)
// {
//     char ch1 = getc(file1);
//     char ch2 = getc(file2);
//     int error = 0, pos = 0, line = 1;

//     while (ch1 != EOF || ch2 != EOF)
//     {
//         pos++;
//         if (ch1 == '\n' && ch2 == '\n')
//         {
//             line++;
//             pos = 0;
//         }

//         if (ch1 != ch2)
//         {
//             error++;
//             printf("Line Number: %d \tError Position: %d\n", line, pos);
//         }

//         ch1 = getc(file1);
//         ch2 = getc(file2);
//     }

//     printf("Total Errors: %d\n", error);
// }

// int main()
// {
//     FILE *file1 = fopen("file1.txt", "r");
//     FILE *file2 = fopen("file2.txt", "r");

//     if (file1 == NULL || file2 == NULL)
//     {
//         printf("Error: Files not open\n");
//         exit(0);
//     }

//     compareFiles(file1, file2);

//     fclose(file1);
//     fclose(file2);

//     return 0;
// }



// =========================================================================================================

// question 30

// #include <stdio.h>
// #include <string.h>

// void main()
// {
//     FILE *filePointer;
//     int wordExist = 0;
//     int bufferLength = 255;
//     char search[100];

//     printf("Enter word to be searched: ");
//     fgets(search, sizeof(search), stdin);
//     search[strcspn(search, "\n")] = 0;

//     filePointer = fopen("file.txt", "r");
//     if (filePointer == NULL)
//     {
//         printf("Error opening file.\n");
//         return;
//     }

//     char line[bufferLength];

//     while (fgets(line, sizeof(line), filePointer))
//     {
//         char *ptr = strstr(line, search);
//         if (ptr != NULL)
//         {
//             wordExist = 1;
//             break;
//         }
//     }

//     fclose(filePointer);

//     if (wordExist == 1)
//     {
//         printf("Word exists in the file.\n");
//     }
//     else
//     {
//         printf("Word doesn't exist in the file.\n");
//     }
// }
