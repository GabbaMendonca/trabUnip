#ifndef OPCOES_H_INCLUDED
#define OPCOES_H_INCLUDED

#include "menu.h"
#include "teste.h"
void opcoes (void){

int opcao;



        printf("Ola, por favor escolha uma das opcoes abaixo: \n\n");
        printf("Para ALUNO          digite: 1 \n");
        printf("Para PROFESSOR      digite: 2 \n");
        printf("Para PALESTRANTE    digite: 3 \n");
        printf("Para CONVIDADO      digite: 4 \n");
        printf("Para FUNCIONARIO    digite: 5 \n");
        printf("Para OUTROS         digite: 6 \n");
        printf("Para SAIR           digite: 7 \n");

        printf("Opcao escolhida: ");
        scanf("%d", &opcao);



    switch (opcao){

        case 1:

            login();
            opcao = 0;
            break;
        case 2:
            loginAdm();
            opcao = 0;
            break;
        case 3:
            loginConv();
            opcao = 0;
            break;
        case 4:
            loginConv();
            opcao = 0;
            break;
        case 5:
            loginAdm();
            opcao = 0;
            break;
        case 6:
            login();
            opcao=0;
            break;
        case 7:
            exit(0);
            break;
        default:
            printf("Valor digitado invalido, por favor digite os valores determinado. \n");

    }
}

void login(void){
    printf("digite seu cpf");
    //void chequeCpf(void);
    //chequeCpf();
    //void menuUser(void);
    //menuUser();
}
void loginAdm(void){
    //void loginAdm(void);
    //loginAdm();
    //void menuAdm(void);
    //menuAdm();

}
void loginConv(void){
    //void chequecpf(void);
    //chequecpf();
    //void menuConv(void);
    //menuConv();
}
//-------------------------------------------------


#endif // OPCOES_H_INCLUDED
