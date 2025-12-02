#include <stdio.h>
#include <string.h>

// constantes - define o valor fixo de número de territórios, missões e tamanho máximo de strings
#define maximo_string_nome 30
#define maximo_string_cor 10
#define maximo_territorios 2

// estrutura - define a estrutura de um território, contendo seu nome, cor e o número de tropas.
struct Territorios{
    char nome[maximo_string_nome];
    char cor[maximo_string_cor];
    int tropas;
};

// função para limpar o buffer de entrada
void limparBufferEntrada();

// função principal 'main' que orquestra o fluxo do jogo, chamando outras funções em ordem.
int main() {
    struct Territorios mapa[maximo_territorios];
    printf("Vamos cadastrar os %i territorios do nosso mundo:\n", maximo_territorios);
    
    // Cadastra os territórios iniciais.
    for (int i = 0; i < maximo_territorios; i++) {
        printf("Cadastrando o %i território\n",i+1);
        printf("Digite o nome do território: ");
        fgets(mapa[i].nome, maximo_string_nome, stdin);
        printf("Digite a cor do exercito: ");
        fgets(mapa[i].cor, maximo_string_cor, stdin);
        printf("Digite o numero de tropas: ");
        scanf("%d", &mapa[i].tropas);
        limparBufferEntrada(); // Limpa o '\n' deixado pelo scanf.
    }

    printf("\nMAPA DO MUNDO - ESTADO ATUAL\n");
 
    // Exibe o estado atual dos territórios cadastrados.
    for (int j = 0; j < maximo_territorios; j++) {
        printf("\nTerritório %i \n",j+1);
        printf("Nome: %s", mapa[j].nome);
        printf("Cor do exercito: %s", mapa[j].cor);
        printf("Numero de tropas: %d\n", mapa[j].tropas);
    }

    return 0;
}
void limparBufferEntrada(){
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}
