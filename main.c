#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeroUno;
    int numeroDos;
    int numeroTres;
    int maximo;
    int minimo;
    int numeroDelMedio;

    printf("ingrese el primer numero \n");
    scanf("%d",&numeroUno);
    maximo=numeroUno;
    minimo=numeroUno;
    printf("ingrese el segundo numero \n");
    scanf("%d",&numeroDos);
    if(numeroDos>maximo) {
        maximo=numeroDos;
    } else {
        if (numeroDos<minimo){
            minimo=numeroDos;
        }
    }
    printf("ingrese el tercer numero \n");
    scanf("%d",&numeroTres);
        if(numeroTres>maximo) {
        maximo=numeroTres;
    } else {
        if (numeroTres<minimo){
            minimo=numeroTres;
        }
    }

    printf("%d\n",numeroUno);
    printf("%d\n",numeroDos);
    printf("%d\n",numeroTres);
    printf("El maximo es %d\n", maximo);
    printf("El minimo es %d\n", minimo);


    return 0;
}
