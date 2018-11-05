#ifndef CAD_H_INCLUDED
#define CAD_H_INCLUDED

#define SIZE 100
#define DESC 500
#define CP 12
struct Pessoa{
    char nome[SIZE];
    char email[SIZE];
    int idade;
    char cpf[CP];
    int deficiencia;
    char descDef[SIZE];
}; struct Pessoa pE[SIZE];


struct Palestra{
    char nomeDoPalestrante[SIZE];
    char nomeDaPalestra[SIZE];
    char descDaPalestra[DESC];
    int localDaPalestra;
}; struct Palestra pA[SIZE];

void novaPessoa(void){
    int i;
    for(i=0;i<SIZE;i++){
        struct Pessoa pE[i];
        void cadastraPessoa(void);
        cadastraPessoa();
        break;
    }
}
void novaPalestra(void){
    int i;
    for(i=0;i<SIZE;i++){
        struct Palestra pA[i];
        void CadastrarPalestra(void);
        CadastrarPalestra();
        break;
    }
}

void cadastraPessoa(void){
    //struct Pessoa pE;
    printf("digite seu nome:");
    fgets(pE[SIZE].nome,SIZE,stdin);

    printf("digite seu email:");
    fgets(pE[SIZE].email,SIZE,stdin);

    printf("digite sua idade:");
    scanf("%d",&pE[SIZE].idade);
    fflush(stdin);
    printf("digite seu cpf:");
    fgets(pE[SIZE].cpf,CP,stdin);

    printf("digite 1 se tiver deficiencia ou 2 caso nao tenha:");
    scanf("%d",&pE[SIZE].deficiencia);
    fflush(stdin);
    if(pE[SIZE].deficiencia==1){
        printf("diga a sua deficiencia:");
        fgets(pE[SIZE].descDef, SIZE, stdin);
    }else{
        printf("aguarde");
    }

}

void CadastrarPalestra(void){
    //struct Palestra pA;


    printf("Nome do Palestrante:");
    fgets(pA[SIZE].nomeDoPalestrante, SIZE, stdin);
    printf("Nome da Palestra:");
    fgets(pA[SIZE].nomeDaPalestra, SIZE, stdin);
    printf("descricao da palestra:");
    fgets(pA[SIZE].descDaPalestra, DESC, stdin);
    printf("local da palestra");
    printf("1-Cancioneira\n 2-Rua da Paz\n 3-bla \n 4-blabla\n");
    scanf("%d", &pA[SIZE].localDaPalestra);
    fflush(stdin);

}

void mostrarPessoa(void){

    printf("%s",pE[SIZE].nome);
    printf("%s",pE[SIZE].email);
    printf("%d",pE[SIZE].idade);
    printf("%d",pE[SIZE].deficiencia);

}

#endif // CAD_H_INCLUDED
