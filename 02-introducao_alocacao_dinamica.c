#include <stdlib.h>
#include <stdio.h>

int main()
{

    /*O operador sizeof() retorna o número de bytes necessários para alocar um
    único elemento de um determinado tipo de dado */
    
    //Exemplo:
    
    int x = sizeof(int);
    printf("x = %d\n", x);
    
    /*A função malloc():
    serve para alocar memória durante a execução do programa. Ela faz o pedido
    de memória ao computador e retorna um ponteiro com o endereço do início do
    espaço alocado */
    
    //Protótipo:
    //*void malloc(unsigned int num);
    
    //Funcionamento:
    /*A função malloc() recebe por parâmetro
    - a quantidade de bytes a ser alocada
    E retorna 
    - NULL: no caso de erro
    - Ponteiro pra primeira posição do array */
    
    
    
    /*Usar o sizeof garante que mesmo se você rodar o código em um sistema onde o
    int tenha um tamanho diferente, o malloc vai calcular os bytes perfeitamente para você!*/
    
    //Cria array de 50 inteiros = 200 bytes
    int *v = malloc(200);
    
    // 50 inteiros (50 * 4 bytes = 200 bytes)
    int *v1 = (int*) malloc(50 * sizeof(int));
    
    //Cria array de 200 caracteres do tipo char = 200 bytes
    char *c = malloc(200);
    
    // 200 caracteres (200 * 1 byte = 200 bytes)
    char *c1 = (char*) malloc(200 * sizeof(char));
    
    printf("*v = %p\n", (void*)v);
    
    printf("*v1 = %p\n", (void*)v1);
    
    v1[6] = 60;
    printf("v1[6] = %d\n", v1[6]);
    
    c[6] = 'k';
    printf("c[6] = %c\n", c[6]);
    
    
    int *pointerius;
    pointerius = (int*) malloc((5*sizeof(int)));
    if(pointerius == NULL) {
        printf("ERRO:Sem memória!\n");
        exit(1); //Termina o programa
    }
        
    int i;
    
    for(i = 0;i < 5; i++) {
        printf("Digite pointerius[%d]: ", i);
        scanf("%d", &pointerius[i]);
    }
    
    //Libera a memória alocada
    free(pointerius);
    
    
    



	return 0;
}