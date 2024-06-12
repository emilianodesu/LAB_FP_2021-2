/*
*  Programa auxiliar para el ejercicio 7
*  0 <= x < 180
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int fact,signo,i=0;
    float x_grados,x_rad,sin_x=0,sin_x_ant=0,x_p,dif=1;

    printf("Ingrese el valor de x en grados:\n");
    scanf("%f",&x_grados);
    x_rad = x_grados*3.14159265358979323846/180;

    while(dif>0.001){
        signo=-1;
        fact=1;
        x_p=1;
        for(int j=0;j<=i;j++){
            signo*=-1;
        }

        for(int j=1;j<=(2*i+1);j++){
            fact*=j;
            x_p*=x_rad;
        }

        sin_x+=(signo*x_p/fact);

        if(sin_x_ant>sin_x)
            dif = sin_x_ant-sin_x;
        else
            dif = sin_x-sin_x_ant;

        sin_x_ant=sin_x;
        i++;
    }

    printf("Sin(x) = %f",sin_x);

    return 0;
}
