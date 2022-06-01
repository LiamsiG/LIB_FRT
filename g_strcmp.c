int  g_strcmp ( char *STR , char *STR0 ) 
{
	int i = 0;	

	while ( STR[i] != '\0' ) 
	{
		if ( STR[i] == STR0[i] ) 
		{
		     return 0;
		}
		i++;
	}
}
