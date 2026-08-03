#include <stdlib.h>
#include <stdio.h>

int main()
{


    //Pode-se criar ponteiros com quantos asteriscos eu quiser, 
    //no entanto aumenta a dificuldade de leitura ter mais de dois asteriscos;
	int x = 12;
	int *p = &x;
	int **p2 = &p;
    
    
   // Endereço guardado em p2 (que é o endereço de p);
    printf("p2 = %p\n", (void*)p2); // &p
    
    // Conteúdo do Endereço apontado por p2 (que é o endereço de x);
    printf("*p2 = %p\n", (void*)*p2); // &x
    //Conteúdo do Endereço do Endereço;
    printf("**p2 = %d\n", **p2); //x




	return 0;
}