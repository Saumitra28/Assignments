// #include <stdio.h>

// int main() {
//     int number;
//     printf("Enter a number: ");
//     scanf("%d", &number);
//     int unitDigit = number % 10;
//     printf("Unit digit: %d\n", unitDigit);
//     return 0;
// }
//ques 1 ends

// #include <stdio.h>

// int main() {
//     int number;
//     printf("Enter a number: ");
//     scanf("%d", &number);
//     int withoutLastDigit = number / 10;
//     printf("Number without last digit: %d\n", withoutLastDigit);
//     return 0;
// }
//ques 2 ends

// #include <stdio.h>

// int main() {
//     int a, b;
//     printf("Enter two integers: ");
//     scanf("%d %d", &a, &b);
//     int temp = a;
//     a = b;
//     b = temp;
//     printf("Swapped values: a = %d, b = %d\n", a, b);
//     return 0;
// }
//ques3 ends

// #include <stdio.h>

// int main() {
//     int a, b;
//     printf("Enter two integers: ");
//     scanf("%d %d", &a, &b);
//     a = a ^ b;
//     b = a ^ b;
//     a = a ^ b;
//     printf("Swapped values: a = %d, b = %d\n", a, b);
//     return 0;
// }
//ques 4 ends

// #include <stdio.h>

// int main() {
//     int number, sum = 0;
//     printf("Enter a three-digit number: ");
//     scanf("%d", &number);
//     while (number > 0) {
//         sum += number % 10;
//         number /= 10;
//     }
//     printf("Sum of digits: %d\n", sum);
//     return 0;
// }
//ques 5 ends

// #include <stdio.h>

// int main() {
//     char ch;
//     printf("Enter a character: ");
//     scanf(" %c", &ch); // Note the space before %c to consume any leading whitespace.
//     printf("ASCII code: %d\n", ch);
//     return 0;
// }
//ques 6 ends

// #include <stdio.h>

// int main() {
//     int num;
//     printf("Enter an integer: ");
//     scanf("%d", &num);
//     int position = 0;
//     while (((num >> position) & 1) != 1) {
//         position++;
//     }
//     printf("Position of the first 1 in LSB: %d\n", position);
//     return 0;
// }
//ques 7 ends

// #include <stdio.h>

// int main() {
//     int num;
//     printf("Enter an integer: ");
//     scanf("%d", &num);
//     if (num & 1) {
//         printf("The number is odd.\n");
//     } else {
//         printf("The number is even.\n");
//     }
//     return 0;
// }
//ques 8 ends

// #include <stdio.h>

// int main() {
//     printf("Size of int: %lu bytes\n", sizeof(int));
//     printf("Size of float: %lu bytes\n", sizeof(float));
//     printf("Size of char: %lu bytes\n", sizeof(char));
//     printf("Size of double: %lu bytes\n", sizeof(double);
//     return 0;
// }

//ques 9 ends

// #include <stdio.h>

// int main() {
//     int number;
//     printf("Enter a number: ");
//     scanf("%d", &number);
//     number = number / 10 * 10; // Sets the last digit to zero
//     printf("Number with the last digit as zero: %d\n", number);
//     return 0;
// }
//ques 10 ends

// #include <stdio.h>

// int main() {
//     int number, digit;
//     printf("Enter a number: ");
//     scanf("%d", &number);
//     printf("Enter a digit to append: ");
//     scanf("%d", &digit);
//     int result = number * 10 + digit;
//     printf("Resulting number: %d\n", result);
//     return 0;
// }
//ques 11 ends

// #include <stdio.h>

// int main() {
//     float inr, usd;
//     printf("Enter the amount in INR: ");
//     scanf("%f", &inr);
//     usd = inr / 76.23;
//     printf("Equivalent amount in USD: %.2f\n", usd);
//     return 0;
// }
// ques 12 ends

// #include <stdio.h>

// int main() {
//     int number;
//     printf("Enter a three-digit number: ");
//     scanf("%d", &number);
//     int lastDigit = number % 10;
//     number /= 10;
//     number = lastDigit * 100 + number;
//     printf("Number after rotating digits: %d\n", number);
//     return 0;
// }

// ques 13 ends


