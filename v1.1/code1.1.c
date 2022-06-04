#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{

	if(argc < 2)
	{ 
		printf("Type a message...\n"); 
  	exit(0);
	}

	if(argc > 3)
  {
		for(int i = 1; i < argc; i++)
		{
			printf("\n\t\t\t %s", argv[i]);
		} 		
	}else{  
 	  printf("\n\t\t\t %s", argv[1]);
	}

	puts("\n\t____________________/_");
  puts("\t|       // o O \\\\  /  |\n\t|           |+        |\n\t|       \\\\ --- //     |\n\t|   ----        ----  |\n\t|  |    |\n\t|\n\t|\n\t|\n\t|");

	puts("\t   M@DM4N1NTH3W1ND0WN\n");
}
