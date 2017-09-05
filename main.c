#include <stdio.h>
#include <stdlib.h>
#define cant 3

int main()

{
    int i,bandera=0;
    int edad[cant];
    float salario[cant];
    int legajo[cant];
    int estado[i];

    for(i=0;i<cant;i++){
        if(estado[i]==0){


    printf("ingresar edad: ");
    scanf("%d",&edad[i]);
    printf("ingresar salario: ");
    scanf("%f",&salario[i]);
    printf("ingresar numero de legajo: ");
    scanf("%f",&legajo[i]);
        estado[i]=1;
        bandera=1;
        break;
    }

    }if(bandera==0){
    printf("Espacio insuficiente");
    }
    else{
        printf("datos correctos");
    }

    r=respueta();
    for(i=0;i<cant;i++){
    printf("El legajo es: %d, las edad ingresada es: %d, cobra %.d",legajo[i],edad[i],salario[i]);
    }

}
