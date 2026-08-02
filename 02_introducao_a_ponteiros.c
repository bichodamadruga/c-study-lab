#include <stdlib.h>
#include <stdio.h>

int main()
{
    /* Sobre o valor de endereço armazenado por um ponteiro podemos apenas somar ou subtrair 
    valores INTEIROS */
    
    // Corrigido com (int *) para o compilador aceitar a atribuição forçada
    int *p = (int *)0x5DC; //1500
    
   
    //Assim mostra o tamanho do endereço em decimal
    printf("*p = %d\n", p);
    //Assim mostra o valor do endereço em forma hexadecimal
    printf("p inicial = %p\n", (void *)p);
    
    p++; // Avança 1 posição de int (4 bytes) -> vai para 1504 (0x5E0)
    printf("p++ = %d\n", p); //1564
    
    p = p + 15; // Avança 15 posições de int (15 * 4 = 60 bytes)
    
    printf("p + 15 = %d\n", p); //1564
    
    p = p - 2;
    printf("p - 2 = %d\n", p); //1556
    
    
    printf("\n--- Ponteiros ---\n");
    printf("Tamanho de int*: %zu bytes\n", sizeof(int*));
    printf("Tamanho de char*: %zu bytes\n", sizeof(char*));
    
    
    

    return 0;
}