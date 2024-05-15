#include <stdio.h>
#include <windows.h>
#include <stdlib.h>

void reprocesso(op){
    printf("Deseja calcular novamente?\n1 - Sim\n2 - Nao\n");
    scanf("%d", &op);

    if(op != 1 && op != 2){
        printf("Opcao invalida! Tente novamente.\n");
        Sleep(4000);
        system("cls");
        reprocesso();
    }
}

int main(){

    int op = 1, med;
    float valor;

    printf("O angulo sera informado em qual medida?\n");
    printf("1 - Graus\n2 - Radianos\n");
    op = get();

    if(med == 1){

    }else if(med == 2){

    }else{
        printf("Opcao invalida!");
        Sleep(4000);
        system("cls");
        main();
    }


    reprocesso(op);

    if(op == 1){
        system("cls");
        main();
    }

    return 0;
}
