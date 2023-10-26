// #include <stdio.h>

// int main() {
//     int N;
//     printf("Enter the value of N: ");
//     scanf("%d", &N);
    
//     int sum = 0;
//     for (int i = 1; i <= N; i++) {
//         sum += i;
//     }
    
//     printf("Sum of the first %d natural numbers: %d\n", N, sum);
    
//     return 0;
// }


// ques 1 ends

// #include <stdio.h>

// int main() {
//     int N;
//     printf("Enter the value of N: ");
//     scanf("%d", &N);

//     int sum = 0;
//     for (int i = 2; i <= 2 * N; i += 2) {
//         sum += i;
//     }

//     printf("Sum of the first %d even natural numbers: %d\n", N, sum);

//     return 0;
// }


// ques 2 ends

// #include <stdio.h>

// int main() {
//     int N;
//     printf("Enter the value of N: ");
//     scanf("%d", &N);

//     int sum = 0;
//     for (int i = 1; i <= 2 * N - 1; i += 2) {
//         sum += i;
//     }

//     printf("Sum of the first %d odd natural numbers: %d\n", N, sum);

//     return 0;
// }


// ques3 ends

// #include <stdio.h>

// int main() {
//     int N;
//     printf("Enter the value of N: ");
//     scanf("%d", &N);

//     int sum = 0;
//     for (int i = 1; i <= N; i++) {
//         sum += i * i;
//     }

//     printf("Sum of squares of the first %d natural numbers: %d\n", N, sum);

//     return 0;
// }

// ques 4 ends

// #include <stdio.h>

// int main() {
//     int N;
//     printf("Enter the value of N: ");
//     scanf("%d", &N);

//     int sum = 0;
//     for (int i = 1; i <= N; i++) {
//         sum += i * i * i;
//     }

//     printf("Sum of cubes of the first %d natural numbers: %d\n", N, sum);

//     return 0;
// }

// ques 5 ends

// #include <stdio.h>

// int main() {
//     int number;
//     printf("Enter a number: ");
//     scanf("%d", &number);

//     int factorial = 1;
//     for (int i = 1; i <= number; i++) {
//         factorial *= i;
//     }

//     printf("Factorial of %d is %d\n", number, factorial);

//     return 0;
// }

// ques 6 ends

// #include <stdio.h>

// int main() {
//     int number;
//     printf("Enter a number: ");
//     scanf("%d", &number);

//     int count = 0;
//     while (number != 0) {
//         number /= 10;
//         count++;
//     }

//     printf("Number of digits: %d\n", count);

//     return 0;
// }

// ques 7 ends

// #include <stdio.h>

// #include <stdio.h>
// #include <stdbool.h>

// bool isPrime(int number) {
//     if (number <= 1) {
//         return false;
//     }
//     for (int i = 2; i * i <= number; i++) {
//         if (number % i == 0) {
//             return false;
//         }
//     }
//     return true;
// }

// int main() {
//     int number;
//     printf("Enter a number: ");
//     scanf("%d", &number);

//     if (isPrime(number)) {
//         printf("%d is a prime number\n", number);
//     } else {
//         printf("%d is not a prime number\n", number);
//     }

//     return 0;
// }

// ques 8 ends

// #include <stdio.h>

// int findGCD(int a, int b) {
//     if (b == 0) {
//         return a;
//     }
//     return findGCD(b, a % b);
// }

// int findLCM(int a, int b) {
//     return (a * b) / findGCD(a, b);
// }

// int main() {
//     int num1, num2;
//     printf("Enter two numbers: ");
//     scanf("%d %d", &num1, &num2);

//     int lcm = findLCM(num1, num2);

//     printf("LCM of %d and %d is %d\n", num1, num2, lcm);

//     return 0;
// }

// ques 9 ends

// #include <stdio.h>

// int main() {
//     int number, reversedNumber = 0;
//     printf("Enter a number: ");
//     scanf("%d", &number);

//     while (number != 0) {
//         int digit = number % 10;
//         reversedNumber = reversedNumber * 10 + digit;
//         number /= 10;
//     }

//     printf("Reversed number: %d\n", reversedNumber);

//     return 0;
// }

// ques 10 ends
