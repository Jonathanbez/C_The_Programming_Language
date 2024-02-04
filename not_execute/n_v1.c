
#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int *ptr;
    long long int total_size = 0;
    long long int chunk_size = 100 * 1024 * 1024;  // 100 MB

    while (1)
    {
        // Tenta alocar uma quantidade específica de memória
        ptr = (long long int *)malloc(chunk_size);

        if (ptr != NULL)
       	{
            // Se a alocação for bem-sucedida, atualiza o tamanho total alocado
            total_size += chunk_size;
            printf("Memória alocada até agora: %lld MB\n", total_size / (1024 * 1024));
        }
	//	else
       //	{
            // Se a alocação falhar, saia do loop
      //      printf("Falha na alocação de memória. Saindo...\n");
     //      break;
      //  }
    }

    // Libera a memória alocada antes de sair
    free(ptr);

    return 0;
}

