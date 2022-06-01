#include <stdlib.h>

int g_strlen(char *str)
{
	int i = 0;
	while ( str[i] != '\0' ) 
	{
		i++;
	}
	i++;
	return(i);
}

char *strdub (char *str )
{
	char *dest;
	dest = malloc((g_strlen(str)) * sizeof(char));
	
	int i = 0;

	while ( str[i] != '\0')
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return dest;
}
