#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <math.h>

int reprocesso(){

    int rep;
    printf("Deseja calcular novamente?\n1 - Sim\n2 - Nao\n");
    scanf("%d", &rep);

    if(rep != 1 && rep != 2){
        printf("Opcao invalida! Tente novamente.\n");
        Sleep(1500);
        system("cls");
        reprocesso();
    }
    return rep;
}

int conversao(){

}

int main(){

    int opcao = 0, opcaoM = 0;
    float medida, rad;

    printf("Qual calculo voce gostaria de realizar?\n1 - Seno\n2 - Cosseno\n3 - Tangente\n4 - Secante\n5 - Cossecante\n6 - Cotangente\n7 - Arco Seno\n8 - Arco Cosseno\n9 - Arco Tangente");
    scanf("%d", &opcao);

    switch(opcao)
    {
    case 1:

    do{
        printf("O angulo sera informado em qual medida?\n");
        printf("1 - Graus\n2 - Radianos\n");
        scanf("%d", &opcaoM);
        if(opcaoM != 1 || opcaoM == 2){
            printf("Opcao invalida!");
            Sleep(1500);
            system("cls");
        }
    }while(opcaoM != 1 || opcaoM == 2);

    printf("Digite a medida:\n");
    scanf("%d", &medida);

    if(opcaoM == 1){
        rad = conversao(medida);
    }

        break;
    case 2:

        break;
    case 3:

        break;
    case 4:

        break;
    case 5:

        break;
    case 6:

        break;
    case 7:

        break;
    case 8:

        break;
    case 9:

        break;
    
    default:
        printf("Opcao invalida!");
        Sleep(1500);
        system("cls");
        main();
        break;
    }

    if(reprocesso() == 1){
        system("cls");
        main();
    }

    return 0;
}
