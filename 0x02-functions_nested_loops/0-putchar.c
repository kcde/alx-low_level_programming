#include <stdio.h>
#include "main.h"
/**
 * main - Check descriptiom
 * Description:  It print the word putchar.
 * Return: 0.
 *
 */
int main(void)
{
int i;
char text[8] = "_putchar";
for (i = 0; i < 8; i++)

	_putchar(text[i]);


_putchar('\n');
return (0);
}
