#include <stdio.h>

char *rev ( char *str ) 
{
	int left = 0; 
	int right = 0;

	while ( str[right] != '\0' ) 
	{
		right++;
	}
	right--;

	while ( left < right ) 
	{
		char temp = str[left];
		str[left++] = str[right];
		str[right--] = temp; 
	}
	printf ("%s\n",str);
}
int main () 
{
	char i [] = "hello";
	rev(i);
}
