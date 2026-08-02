#include <stdlib.h>
#include <stdio.h>

int main()
{
 
    /*Ponteiro Genérico: pode apontar pra todos os tipos de dados
    existentes ou que ainda serão criados.*/
    
    //Forma geral:
    
    //void *nome_ponteiro;
    
    //Exemplo
    
    /*Antes de acessar o conteúdo é preciso converter o ponteiro Genérico
    para o tipo de ponteiro com o qual se deseja trabalhar. */
    
    void *v;
    
    int p2 = 6;
    
    v = &p2; //Endereço de int;
    
    //printf("Conteudo: %d\n", *v); ERRADO
    
    printf("Conteudo: %d\n", *(int*)v);
    
    /* As operações aritméticas para o tipo void são sempre utilizadas com base em uma unidade
    de memória (1 byte); */
    
    void *p = (int *)0x5DC;
    
    p = p + 15;
    
    printf("P + 15 = %d\n", p);
    
 

    return 0;
}