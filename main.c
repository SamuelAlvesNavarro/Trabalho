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

double conversao(double ang){
    return ((ang * M_PI) / 180);
}

int main(){

    int opcao = 0, opcaoM = 0;
    double medida = 0;


    do{
        printf("Qual calculo voce gostaria de realizar?\n1 - Seno\n2 - Cosseno\n3 - Tangente\n4 - Secante\n5 - Cossecante\n6 - Cotangente\n7 - Arco Seno\n8 - Arco Cosseno\n9 - Arco Tangente\n");
        scanf("%d", &opcao);

        if(opcao != 1 || opcao != 2 || opcao != 3 || opcao != 4 || opcao != 5 || opcao != 6 || opcao != 7 || opcao != 8 || opcao != 9){
            printf("Opcao invalida!\n");
            Sleep(1500);
            system("cls");
        }

    }while(opcao != 1 || opcao != 2 || opcao != 3 || opcao != 4 || opcao != 5 || opcao != 6 || opcao != 7 || opcao != 8 || opcao != 9);


    if(opcao != 7 || opcao != 8 || opcao != 9){
        do{
            printf("O angulo sera informado em qual medida?\n");
            printf("1 - Graus\n2 - Radianos\n");
            scanf("%d", &opcaoM);

            if(opcaoM != 1 || opcaoM != 2){
                printf("Opcao invalida!\n");
                Sleep(1500);
                system("cls");
            }
        }while(opcaoM != 1 || opcaoM != 2);

        printf("Digite a medida:\n");
        scanf("%d", &medida);

        if(opcaoM == 1){
            medida = conversao(medida);
        }

    }else{
        if(opcao == 7){
            do{
                printf("Digite o seno:\n");
                scanf("%d", &medida);

                if(medida <= 1 && medida >= -1){
                    printf("Opcao invalida!\n");
                    Sleep(1500);
                    system("cls");
                }
            }while(medida <= 1 && medida >= -1);

        }else if(opcao == 8){

            do{
                printf("Digite o cosseno:\n");
                scanf("%d", &medida);

                if(medida <= 1 && medida >= -1){
                    printf("Opcao invalida!\n");
                    Sleep(1500);
                    system("cls");
                }
            }while(medida <= 1 && medida >= -1);

        }else if(opcao == 9){
           
            do{
                printf("Digite o tangente:\n");
                scanf("%d", &medida);

                if(medida <= 1 && medida >= -1){
                    printf("Opcao invalida!\n");
                    Sleep(1500);
                    system("cls");
                }
            }while(medida <= 1 && medida >= -1);

        }
    }

    switch(opcao)
    {
    case 1:

        printf("O valor do Seno é: %.2lf\n", sin(medida));

        break;
    case 2:

    printf("O valor do Cosseno é: %.2lf\n", cos(medida));

        break;
    case 3:

    printf("O valor do Tangente é: %.2lf\n", tan(medida));

        break;
    case 4:

    printf("O valor do Cossecante é: %.2lf\n", 1 / sin(medida));

        break;
    case 5:

    printf("O valor do Secante é: %.2lf\n", 1/cos(medida));

        break;
    case 6:

    printf("O valor do Cotangente é: %.2lf\n", 1/tan(medida));

        break;
    case 7:

    printf("O valor do Arco Seno é: %.2lf ° e %.2lf rad\n", xx,asin(medida));

        break;
    case 8:

    printf("O valor do Arco Cosseno é: %.2lf e %.2lf rad\n", acos(medida));

        break;
    case 9:

    printf("O valor do Arco Tangente é: %.2lf e %.2lf rad\n", atan(medida));

        break;
    
    default:
        printf("Opcao invalida!\n");
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
