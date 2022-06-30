#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'print sized of data type'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int intType;
char charType;
float floatType;
long longType;
long long  longLongType;

printf("Size of char: %zu byte(s)\n", sizeof(charType));
printf("Size of int: %zu byte(s)\n", sizeof(intType));
printf("Size of long: %zu byte(s)\n", sizeof(longType));
printf("Size of long long: %zu byte(s)\n", sizeof(longLongType));
printf("Size of float: %zu byte(s)\n", sizeof(floatType));
}
