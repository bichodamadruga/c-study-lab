#include <stdlib.h>
#include <stdio.h>

int main()
{
 
   /*O nome do array é apenas um ponteiro que aponta para o primeiro elemento do array; */
   
   
   int vet[5] = {1,2,3,4,5};
   int *p = vet;
   int i;
   
   
   for(i = 0; i < 5; i++) {
       printf("%d\n", p[i]); /*Essa forma de acessar o conteúdo do vetor é na 
       verdade a da linha abaixo "por trás dos panos"*/
       printf("%d\n", *(p+i));
       
       printf("%d\n", *(vet+i));
       
   };
   //Duas formas de acessar um endereço de alguma posição num array
       printf("&vet[2] = %d\n", &vet[2]);
       printf("&vet[2] = %d\n", (vet+2));
   //Duas formas abaixo pra acessar o endereço hexadecimal do elemento em questão
       printf("&vet[2] = %p\n", (void*)&vet[2]);
   printf("&vet[2] = %p\n", (void*)(vet+2));
       
    //Também podemos declarar um array de ponteiros;
    //Tipo de dado *nome_array[tamanho];
    
    int *vetor1[5];
    
    int linha0[4] = {1, 2, 3, 4};
    int linha1[4] = {5, 6, 7, 8};
    int linha2[4] = {9, 10, 11, 12};

    // Criando o array de ponteiros (as "linhas" da matriz)
    int *matriz[3];
    
    matriz[0] = linha0;
    matriz[1] = linha1;
    matriz[2] = linha2;

    // Acessando usando a sintaxe clássica de matriz [][]
    printf("Acesso com colchetes: %d\n", matriz[1][2]); // Deve imprimir 7

    // Acessando usando aritmética de ponteiros pura
    // *(matriz + 1) nos dá o ponteiro da linha 1. Somamos 2 para ir para a coluna 2.
    printf("Acesso com ponteiros: %d\n", *(*(matriz + 1) + 2)); // Também imprime 7
   
   
   
   
    return 0;
}