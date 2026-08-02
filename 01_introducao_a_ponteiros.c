#include <stdlib.h>
#include <stdio.h>

int main()
{
    int x = 10, *p;
    
    p = &x;
    
    printf("x = %d\n", x);
    // Usando %p para imprimir o endereço de memória em hexadecimal
    printf("p = %p\n", (void *)p);
    printf("*p = %d\n", *p);
    
    *p = 12;
   // O asterisco permite modificar o valor que está no endereço da variável associada a p.
    printf("*p = %d\n", *p);
    printf("x = %d\n", x);

    return 0;
}
