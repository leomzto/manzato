#include <stdio.h>

int main(void)
{
    int pontos;
    printf("Pontos da piramide: ");
    scanf("%d", &pontos);

    int p = 1;
    int soma = 0;

    while ( p <= pontos)
    {
        soma += p;
        printf("%d ", soma);
        p++;
    }

    printf("\n");
    
    return 0;
}
