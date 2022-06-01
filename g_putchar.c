#include <unistd.h>

void g_putchar(char c)
{
	write(1, &c, 1);
}
