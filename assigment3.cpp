// #include <stdio.h>

// int main() {
//     int number;
//     printf("Enter a number: ");
//     scanf("%d", &number);
//     if (number > 0) {
//         printf("Positive number\n");
//     } else {
//         printf("Non-positive number\n");
//     }
//     return 0;
// }
//ques 1 ends

// #include <stdio.h>

// int main() {
//     int number;
//     printf("Enter a number: ");
//     scanf("%d", &number);
//     if (number % 5 == 0) {
//         printf("Divisible by 5\n");
//     } else {
//         printf("Not divisible by 5\n");
//     }
//     return 0;
// }
//ques 2 ends

// #include <stdio.h>

// int main() {
//     int number;
//     printf("Enter a number: ");
//     scanf("%d", &number);
//     if (number % 2 == 0) {
//         printf("Even number\n");
//     } else {
//         printf("Odd number\n");
//     }
//     return 0;
// }

//ques3 ends

// #include <stdio.h>

// int main() {
//     int number;
//     printf("Enter a number: ");
//     scanf("%d", &number);
//     if ((number & 1) == 0) {
//         printf("Even number\n");
//     } else {
//         printf("Odd number\n");
//     }
//     return 0;
// }

//ques 4 ends

// #include <stdio.h>

// #include <stdio.h>

// int main() {
//     int number;
//     printf("Enter a number: ");
//     scanf("%d", &number);
//     if (number >= 100 && number <= 999) {
//         printf("Three-digit number\n");
//     } else {
//         printf("Not a three-digit number\n");
//     }
//     return 0;
// }

//ques 5 ends

// #include <stdio.h>

// int main() {
//     int num1, num2;
//     printf("Enter two numbers: ");
//     scanf("%d %d", &num1, &num2);
//     if (num1 > num2) {
//         printf("Greater number: %d\n", num1);
//     } else if (num2 > num1) {
//         printf("Greater number: %d\n", num2);
//     } else {
//         printf("Both numbers are the same: %d\n", num1);
//     }
//     return 0;
// }

//ques 6 ends

// #include <stdio.h>
// #include <math.h>

// int main() {
//     double a, b, c;
//     printf("Enter the coefficients (a, b, c) of the quadratic equation (ax^2 + bx + c = 0): ");
//     scanf("%lf %lf %lf", &a, &b, &c);
//     double discriminant = b * b - 4 * a * c;

//     if (discriminant > 0) {
//         printf("Real and distinct roots\n");
//     } else if (discriminant == 0) {
//         printf("Real and equal roots\n");
//     } else {
//         printf("Imaginary roots\n");
//     }
//     return 0;
// }

//ques 7 ends

// #include <stdio.h>

// int main() {
//     int year;
//     printf("Enter a year: ");
//     scanf("%d", &year);
//     if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
//         printf("Leap year\n");
//     } else {
//         printf("Not a leap year\n");
//     }
//     return 0;
// }

//ques 8 ends

// #include <stdio.h>

// int main() {
//     int num1, num2, num3;
//     printf("Enter three numbers: ");
//     scanf("%d %d %d", &num1, &num2, &num3);
//     if (num1 > num2 && num1 > num3) {
//         printf("Greatest number: %d\n", num1);
//     } else if (num2 > num1 && num2 > num3) {
//         printf("Greatest number: %d\n", num2);
//     } else if (num3 > num1 && num3 > num2) {
//         printf("Greatest number: %d\n", num3);
//     } else {
//         printf("Two or more numbers are equal and greatest: %d\n", num1);
//     }
//     return 0;
// }

//ques 9 ends

// #include <stdio.h>

// int main() {
//     float costPrice, sellingPrice, profitLoss;
//     printf("Enter the cost price and selling price of a product: ");
//     scanf("%f %f", &costPrice, &sellingPrice);
//     profitLoss = sellingPrice - costPrice;

//     if (profitLoss > 0) {
//         printf("Profit Percentage: %.2f%%\n", (profitLoss / costPrice) * 100);
//     } else if (profitLoss < 0) {
//         printf("Loss Percentage: %.2f%%\n", (-profitLoss / costPrice) * 100);
//     } else {
//         printf("No Profit, No Loss\n");
//     }
//     return 0;
// }

//ques 10 ends

// #include <stdio.h>

// int main() {
//     int marks[5];
//     int passingMarks = 33;
//     printf("Enter marks for 5 subjects (out of 100):\n");
//     for (int i = 0; i < 5; i++) {
//         printf("Enter marks for subject %d: ", i + 1);
//         scanf("%d", &marks[i]);
//     }
//     int totalMarks = 0;
//     for (int i = 0; i < 5; i++) {
//         totalMarks += marks[i];
//     }
//     if (totalMarks >= passingMarks * 5) {
//         printf("Candidate passed the examination\n");
//     } else {
//         printf("Candidate failed the examination\n");
//     }
//     return 0;
// }

//ques 11 ends

// #include <stdio.h>

// int main() {
//     char ch;
//     printf("Enter an alphabet: ");
//     scanf(" %c", &ch); // Note the space before %c to consume any leading whitespace.
//     if (ch >= 'A' && ch <= 'Z') {
//         printf("Uppercase alphabet\n");
//     } else if (ch >= 'a' && ch <= 'z') {
//         printf("Lowercase alphabet\n");
//     } else {
//         printf("Not an alphabet\n");
//     }
//     return 0;
// }

// ques 12 ends

// #include <stdio.h>

// int main() {
//     int number;
//     printf("Enter a number: ");
//     scanf("%d", &number);
//     if (number % 3 == 0 && number % 2 == 0) {
//         printf("Divisible by both 3 and 2\n");
//     } else {
//         printf("Not divisible by both 3 and 2\n");
//     }
//     return 0;
// }

// ques 13 ends

// #include <stdio.h>

// int main() {
//     int number;
//     printf("Enter a number: ");
//     scanf("%d", &number);
//     if (number % 7 == 0 || number % 3 == 0) {
//         printf("Divisible by 7 or 3\n");
//     } else {
//         printf("Not divisible by 7 or 3\n");
//     }
//     return 0;
// }
//ques 14 ends

// #include <stdio.h>

// int main() {
//     int number;
//     printf("Enter a number: ");
//     scanf("%d", &number);
//     if (number > 0) {
//         printf("Positive number\n");
//     } else if (number < 0) {
//         printf("Negative number\n");
//     } else {
//         printf("Zero\n");
//     }
//     return 0;
// }
//ques 15 ends

// #include <stdio.h>
// #include <ctype.h>

// int main() {
//     char ch;
//     printf("Enter a character: ");
//     scanf(" %c", &ch); // Note the space before %c to consume any leading whitespace.

//     if (isupper(ch)) {
//         printf("Uppercase alphabet\n");
//     } else if (islower(ch)) {
//         printf("Lowercase alphabet\n");
//     } else if (isdigit(ch)) {
//         printf("Digit\n");
//     } else {
//         printf("Special character\n");
//     }
//     return 0;
// }
//ques 16 ends

// #include <stdio.h>

// int main() {
//     int a, b, c;
//     printf("Enter the lengths of the sides of a triangle: ");
//     scanf("%d %d %d", &a, &b, &c);
//     if (a + b > c && b + c > a && c + a > b) {
//         printf("Valid triangle\n");
//     } else {
//         printf("Invalid triangle\n");
//     }
//     return 0;
// }
//ques 17 ends

// #include <stdio.h>

// int main() {
//     int month;
//     printf("Enter the month number (1-12): ");
//     scanf("%d", &month);
//     if (month == 4 || month == 6 || month == 9 || month == 11) {
//         printf("30 days\n");
//     } else if (month == 2) {
//         printf("28 or 29 days (depending on the year)\n");
//     } else if (month >= 1 && month <= 12) {
//         printf("31 days\n");
//     } else {
//         printf("Invalid month number\n");
//     }
//     return 0;
// }
//ques 18 ends