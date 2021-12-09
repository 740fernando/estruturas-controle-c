#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int opc;
    printf("Escolha o cargo para verificar o superior: \n");
    printf("1 - Presidente \n");
    printf("2 - Diretor \n");
    printf("3 - Gerente \n");
    printf("4 - Analista \n");
    printf("5 - Estagiario \n");
    scanf("%d",&opc);

    switch (opc)
    {
    case 1:
        printf("Sem superior");
        break;

    case 2:
        printf("Presidente");
        break;

    case 3:
        printf("Diretor");
        break;

    case 4:
        printf("Gerente");
        break;

    case 5:
        printf("Analista");
        break;

    default:
        printf("Numero invalido");
    }
    return 0;
}