#include <stdio.h>

int main(void)
{
    float idade[60];
    int mcounter=0;
    int icounter=0;
    int acounter=0;
    float menores[60];
    float adultos[60];
    float idosos[60];
    //colocar todas as idades igual a zero
    for(int i=0;i<60;i++)
    {
        menores[i]=0;
        adultos[i]=0;
        idosos[i]=0;
        idade[i]=0;
    }
    //inrtodução do código
    printf("Por favor entre as devidas 60 idades.\n");
    //pegar do usuário as 60 idades
    for(int i=0;i<60;i++)
    {
        printf("idade %i:",(i+1));
        scanf("%f",&idade[i]);      
    }
    //separar as idades em grupos de menores,adultos e idosos
    for(int n=0;n<60;n++)
    {
        if(idade[n]<=18)
        {
            menores[mcounter]=idade[n];
            mcounter++;
        }
        if(idade[n]>=19 && idade[n]<=60)
        {
            adultos[acounter]=idade[n];
            acounter++;
        }
        if(idade[n]>60)
        {
            idosos[icounter]=idade[n];
            icounter++;
        }
    }
    //imprimir idade menores
    printf("\n idades da faixa etaria entre 0-18 anos: ");
    int whilecounter=0;
    while(menores[whilecounter]!=0)
    {
        printf("%i ",((int)menores[whilecounter]));
        whilecounter++;
    }


    //imprimir idade adultos
    printf("\n idades da faixa etaria entre 19-60 anos: ");
     whilecounter=0;
    while(adultos[whilecounter]!=0)
    {
        printf("%i ",(int)adultos[whilecounter]);
        whilecounter++;
    }

    
    //imprimir idade idosos
    printf("\n idades da faixa etaria maior que 60 anos: ");
     whilecounter=0;
    while(idosos[whilecounter]!=0)
    {
        printf("%i ",(int)idosos[whilecounter]);
        whilecounter++;
    }
     printf("\n");
    //imprimir as quantidades de idades
    printf("menores: %i\n",mcounter);
    printf("adultos: %i\n",acounter);
    printf("idosos: %i\n",icounter);

    //imprimir a media por faixa etária
    float SDM=0;
    float SDA=0;
    float SDI=0;
    //-> menores
    for(int h=0;h<60;h++)
    {
        if(menores[h]==0)
        {
            break;
        }
        SDM += menores[h];
    }
    //->adultos
    for(int i=0;i<60;i++)
    {
        if(adultos[i]==0)
        {
            break;
        }
        SDA += adultos[i];
    }
    //->idosos
    for(int i=0;i<60;i++)
    {
        if(idosos[i]==0)
        {
            break;
        }
        SDI += idosos[i];
 
    }
    //imprimir media
    //SDM
    printf("media da faixa etaria de menores: %f\n",(SDM/mcounter));
    //SDA
    printf("media da faixa etaria de adultos: %f\n",(SDA/acounter));
    //SDI
    printf("media da faixa etaria de idosos: %f\n",(SDI/icounter));
    //imprimir média geral 
    float SDIG=0;
    for(int i=0;i<60;i++)
    {
        SDIG += idade[i];
    }
    printf("media geral: %f\n",(SDIG/60));
    //close 
    printf("escreva qualquer numero maior que zero para sair: ");
    int saida=0;
    scanf("%i",saida);
    return 0;
}