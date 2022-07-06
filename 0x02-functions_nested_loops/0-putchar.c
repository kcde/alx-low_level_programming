#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * main - tCheck descriptiom
 * Description: print putchar.
 * Return : 0.
 */
int main(void)

{
int i;
char text[8] = "_putchar";
for (i = 0; i < 8; i++)
{
_putchar(text[i]);

}
_putchar("\n");
return (0);
}
