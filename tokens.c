#include<stdio.h>
#include<ctype.h>
#include<string.h>

#include "tokenize.h"

// Much of this project was based off or taken from Nat Tuck's lecture 09.

//-----------------------------------------------------------------------------------------------------

/* TODO:

   while (1) { --DONE--
     printf("tokens$ "); --DONE--
     fflush(stdout); --DONE--
     line = read_line() --DONE-- in tokenize
     if (that was EOF) { Q5
        exit(0);
     }
     tokens = tokenize(line); --DONE--
     foreach token in reverse(tokens): Q3 --DONE--
       puts(token) --DONE--
   }

*/

//-----------------------------------------------------------------------------------------------------

int
main(int _ac, char* _av[])
{
	// had to be done in a factor of 2
	char line[128];

	//followed the given pseudocode to a t
	while(1)
	{
		printf("tokens$ ");
		fflush(stdout);
		char* rv = fgets(line, 128, stdin);
		if(!rv) 
		{
			break;
		}
		list* tokens = tokenize(line);
		//here is the second reverse, only because i believe the instructions want us to do this.
		tokens = rev_free(tokens);
		print_list(tokens);
		free_list(tokens);
	}
	return 0; 
}

//-----------------------------------------------------------------------------------------------------





