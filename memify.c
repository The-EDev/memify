#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h> 

int main (int argc, char* argv[])
{
	int arglen = strlen(argv[1]);
	char newstring[arglen];
	bool flip = false;
	
	for (int i=0; i<arglen; i++)
	{
		if (argv[1][i] == ' ')
			flip = !flip;
		if (!flip)
		{
			if (i%2 == 0)
				newstring[i] = tolower(argv[1][i]);
			else
				newstring[i] = toupper(argv[1][i]);
		}
		else
		{
			if (i%2 != 0)
				newstring[i] = tolower(argv[1][i]);
			else
				newstring[i] = toupper(argv[1][i]);
		}
	}
	
	printf(strcat(newstring, "\n"));
	return 0;
}
