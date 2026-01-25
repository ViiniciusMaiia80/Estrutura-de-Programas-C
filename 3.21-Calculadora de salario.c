#include <stdio.h>

int main (void){
    int horasTrabalhadas, horasExtras;
    float valorHoras, salario;
    while(horasTrabalhadas!=-1){
        printf("Informe as horas trabalhadas(-1 para terminar): ");
            scanf("%d", &horasTrabalhadas);
        if(horasTrabalhadas==-1)break;

        printf("Informe o valor das horas trabalhadas: ");
            scanf("%f", &valorHoras);
        if(horasTrabalhadas>40){
            horasExtras = horasTrabalhadas-40;
            salario = 40*valorHoras + horasExtras*(valorHoras*1.5);
        }else{
            salario = horasTrabalhadas * valorHoras;
        }
        printf("O salario do funcionario eh: %.2f\n\n", salario);
    }
    return 0;
}