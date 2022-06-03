#include <unistd.h>

int  ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_num(char c , char c1 , char c2 ) 
{
	ft_putchar(c+'0');
	ft_putchar(c1+'0');
	ft_putchar(c2+'0');

	if ( c != 7 || c1 != 8 || c2 != 9 ) 
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}
void combi(void)
{
	int i,j,k;
	i = 0;
	while ( i <= 9 ) 
	{
		j = i+ 1;
		while ( j <= 9 ) 
		{
			k= j +1 ;
			while( k <= 9 ) 
			{
				ft_print_num(i,j,k);
				k++;
			}
			j++;
		}
		i++;
	}
}
int main ()
{
	combi();
}
