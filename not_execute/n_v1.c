
#include <stdio.h>
#include <stdlib.h>

int main()
{
	while(1)
	{
		char *mem = malloc(1048576);

		if(mem == NULL)
		{
			fprintf(stderr, "Falha na alocação de memória\n");
			break;
		}
		free(mem);
	}
	return 0;
}

