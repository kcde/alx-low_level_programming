#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * main - tCheck descriptiom
 * Description: print putchar.
 * Return : 0.
 */
int main(void)
int i;
{
char text[] = "_putchar";
for (i = 0; i < strlen(text); i++)
{
_putchar(text[i]);

}
_putchar("\n");
return (0);
}
