//Name-Payal dhakad
//Assignment 2nd batch-2pm 26jun2
//assignment 2nd,batch-2pm 26jun
// 1 write a program to calculate factorial of any number;
/*
#include <stdio.h>
void main()
{

    int fact = 1, i, num;
    printf("enter the number\n");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    printf(" fact=%d", fact);
}

// 2.write a program to print table of any number;

#include <stdio.h>
void main()
{
    int num, i, table;
    printf("enter the number\n");
    scanf("%d", &num);
    for (i = 1; i <= 10; i++)
    {
        table = num * i;
        printf("%d * %d = %d\n", num, i, table);
    }
}

// 3. write a program to print fibonacci series.

#include <stdio.h>
void main()
{
    int a = 0, b = 1, c, n;
    printf("enter the number\n");
    scanf("%d", &n);
    printf("fibonacci series: %d, %d, ", a, b);
    c = a + b;
    while (c <= n)
    {
        printf("%d, ", c);
        a = b;
        b = c;
        c = a + b;
    }
}

#include <stdio.h>
void main()
{
    int a = -1, b = 1, c, i;
    for (i = 1; i <= 10; i++)
    {
        c = a + b;
        a = b;
        b = c;
        printf("%d, ", c);
    }
}

// 4. write a program to calculate sum of digits of a number

#include <stdio.h>
void main()
{
    int num, i, sum = 0;
    printf("enter the number= ");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        sum = sum + i;
    }
    printf("sum of the digit=%d", sum);
}

// 5. write a program to calculate sum of series(1/1+1/2+1/3+1/4+....)

#include <stdio.h>
int main()
{
    int num, i, sum = 0;
    printf("Input any number: ");
    scanf("%d", &num);
    for (i = 1; i <= num - 1; i++)
    {
        printf(" 1/%d +", i);
    }
    for (i = 1; i <= num; i++)
    {
        sum = sum + i;
    }
    printf(" 1/%d", num);
    printf("\nSum = 1/%d", sum);

    return 0;
}

// 6. write a program to print prime numbers from 1 to 1000
#include <stdio.h>
void main()
{
    int i, j, n, count = 0;
    printf(" enter n number=\n");
    scanf("%d", &n);
    printf("prime number\n");
    for (i = 1; i <= n; i++)
    {
        for (j = 2; j <= i - 1; j++)
        {
            if (i % j == 0)
            {
                count++;
            }
        }
        if (count == 0)
        {
            printf("%d ,", i);
        }
        else
        {
            count = 0;
        }
    }
}

// 7. write a program to calcuilate sum of first 10 even numbers

#include <stdio.h>
void main()
{
    int sum = 0, num, i;
    for (i = 1; i <= 20; i++)
    {
        if (i % 2 == 0)
        {
            sum = sum + i;
            printf("%d+", i);
        }
    }
    printf("\nsum of the even num=%d", sum);
}

// 8.write a program to print following patterns on screen;

// *
//
// ***
//
// *****

#include <stdio.h>
void main()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if (i % 2 != 0)
            {
                printf("*");
            }
        }
        printf("\n");
    }
}

// 5
// 54
// 543
// 5432
// 54321

#include <stdio.h>
void main()
{
    int i, j;
    for (i = 5; i >= 1; i--)
    {
        for (j = 5; j >= i; j--)
        {
            printf("%d", j);
        }
        printf("\n");
    }
}

//*
//**
//****
//*******
//***********
//****************

#include <stdio.h>
void main()
{
    int i, j, k;
    k = 0;
    for (i = 0; i <= 5; i++)
    {
        k = k + i;
        for (j = 0; j <= k; j++)
        {
            printf("*");
        }

        printf("\n");
    }
}

// 12345678
// 7654321
// 123456
// 54321
// 1234
// 321
// 12
// 1

#include <stdio.h>
void main()
{
    int i, j;
    for (i = 8; i >= 1; i--)
    {
        if (i % 2 == 0)
        {
            for (j = 1; j <= i; j++)
            {
                printf("%d", j);
            }
        }
        else
        {

            for (j = i; j >= 1; j--)
            {
                printf("%d", j);
            }
        }
        printf("\n");
    }
}

// 9..write a program to print following patterns on screen;
//      *
//     * *
//    * * *
//   * * * *
//  * * * * *

#include <stdio.h>
void main()
{
    int i, j, k;
    for (i = 1; i <= 5; i++)
    {
        for (k = 1; k <= 5 - i; k++)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf(" *");
        }
        printf("\n");
    }
}

// 10. write a program to calculate factorial using function with return type and argument?

#include <stdio.h>

int factorial(int num)
{
    int i, fact = 1;
    for (i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    return fact;
}

void main()
{
    int num;
    printf("enter the number\n");
    scanf("%d", &num);
    int f = factorial(num);
    printf("factorial=%d", f);
}

// 11. write a program to check the prime number using function with argument and return type

#include <stdio.h>

int prime(int n)
{
    int i, j, count = 0;

    for (i = 2; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    return count;
}

void main()
{
    int p, n, count = 0;
    printf(" enter n number= ");
    scanf("%d", &n);
    count = prime(n);

    if (count == 1)
    {

        printf("%d=is a prime number ", n);
    }
    else
    {
        printf("not a prime number\n");
    }
}

// 12. write a program  to reverse elements in array?(last element go to first position and vice-versa)
#include <stdio.h>
void main()
{
    int i, arr[5], rev = 0, r;
    printf("enter the array elements\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < 10; i++)
    {
        printf("%d", arr[i]);
    }
    printf("\n reverse order\n");
    for (i = 9; i >= 0; i--)
    {
        printf("%d", arr[i]);
    }
}

// 13. write a program to sort array in descending order?

#include <stdio.h>
void main()
{
    int num[20];
    int i, j, a, n;
    printf("enter number of elements in an array");
    scanf("%d", &n);
    printf("Enter the elements");
    for (i = 0; i < n; i++)
        scanf("%d", &num[i]);
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (num[i] < num[j])
            {
                a = num[i];
                num[i] = num[j];
                num[j] = a;
            }
        }
    }
    printf("The numbers in descending order is:");
    for (i = 0; i < n; i++)
    {
        printf("\t%d '", num[i]);
    }
}

// 14. write a program to find maximum element in array.

#include <stdio.h>
void main()
{
    int max, i, n, arr[10];
    printf("enter the data\n");

    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    max = arr[0];
    for (i = 0; i < 10; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    printf("maximum value=%d", max);
}

// 15. write a program to input two 3*3 array and perform below operation -
//   1- addition
//   2-multiplication

#include <stdio.h>

int main()
{

    int a[10][10], b[10][10], c[10][10], i, j, add[10][10];

    printf("\nEnter First Matrix : n");

    for (i = 0; i < 3; i++)
    {

        for (j = 0; j < 3; j++)
        {

            scanf("%d", &a[i][j]);
        }
    }

    printf("\nEnter Second Matrix:n");

    for (i = 0; i < 3; i++)
    {

        for (j = 0; j < 3; j++)
        {

            scanf("%d", &b[i][j]);
        }
    }

    printf("The First Matrix is: \n");

    for (i = 0; i < 3; i++)
    {

        for (j = 0; j < 3; j++)
        {

            printf(" %d ", a[i][j]);
        }

        printf("\n");
    }

    printf("The Second Matrix is : \n");

    for (i = 0; i < 3; i++)
    {

        for (j = 0; j < 3; j++)
        {

            printf(" %d ", b[i][j]);
        }

        printf("\n");
    }

    // Multiplication & addition Logic

    for (i = 0; i <= 2; i++)
    {

        for (j = 0; j <= 2; j++)
        {
            c[i][j] = a[i][j] * b[i][j];
            add[i][j] = a[i][j] + b[i][j];
        }
    }
    printf("\nMultiplication Of Two Matrices : \n");

    for (i = 0; i < 3; i++)
    {

        for (j = 0; j < 3; j++)
        {

            printf(" %d ", c[i][j]);
        }

        printf("\n");
    }
    printf("\nAddition Of Two Matrices : \n");

    for (i = 0; i < 3; i++)
    {

        for (j = 0; j < 3; j++)
        {

            printf(" %d ", add[i][j]);
        }

        printf("\n");
    }

    return (0);
}
*/