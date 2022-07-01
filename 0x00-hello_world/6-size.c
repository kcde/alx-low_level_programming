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

printf("Size of a char: %zu byte(s)\n", sizeof(charType));
printf("Size of an int: %zu byte(s)\n", sizeof(intType));
printf("Size of a long: %zu byte(s)\n", sizeof(longType));
printf("Size of a long long: %zu byte(s)\n", sizeof(longLongType));
printf("Size of a loat: %zu byte(s)\n", sizeof(floatType));
}
