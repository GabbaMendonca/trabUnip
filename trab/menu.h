#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED

#include "cad.h"
#include "teste.h"
struct menu{

};
void menu(void){
    void novaPessoa(void);//adm
    void novaPalestra(void);//adm
    void procurarPalestraCadastradas(void);//adm
    void procurarPessoaCadastrada(void);//adm


    void palestras(void);//user
    void meuCadastro(void);//user, convidado e palestrante
    void procurarPalestra(void);//user
    void mostrarPalestras(void);//user,convidade e palestrante

}
void menuAdm(void){
    teste();

}
void menuUser(void){
    teste();

}
void menuConv(void){
    teste();
}

#endif // MENU_H_INCLUDED
