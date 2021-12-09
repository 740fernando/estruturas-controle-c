#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAX 10

int main()
{
    int opc, i=0;
        printf("Executando PARA if");
        printf("Apresenta na ordem crescente ! \n");
        printf("1- For\n");
        printf("2- Do-while\n");
        printf("3- While \n\n");
        printf("Apresenta na ordem decrescente ! \n");
        printf("4- For\n");
        printf("5- Do-while\n");
        printf("6- While \n\n");
        scanf("%d",&opc);

    if(opc==1)
    {
        i=1;
        printf("For - Crescente \n");
        for ( i = 1; i < MAX; i++)
        {
            printf(i);
        }        
    }
    else if(opc==2)
    {
        i=1;
        printf("Do-while - Crescente\n");
        do
        {
            printf("%d\n",i);
            i++;
        }while(i<MAX+1);
    }
    else if(opc==3)
    {
        i=1;
        printf("While - Crescente\n");
        while(i<MAX+1)
        {
            printf("%d\n",i);
            i++;
        }
    }
      else if(opc==4)
    {
        i=1;
        printf("For - Decrescente \n");
        for ( i =MAX; i > 0; i--)
        {
            printf("%d\n",i);
        } 
    }
      else if(opc==5)
    {
        i=MAX;
        printf("Do-while - Decrescente\n");
        do
        {
            printf("%d\n",i);
            i--;
        }while(i>0);
    }
      else if(opc==6)
    {
        i=MAX;
        printf("While - Decrescente\n");
        while(i>0)
        {
            printf("%d\n",i);
            i--;
        }
    }else{
        printf("numero incorreto");
    }
}