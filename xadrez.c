#include <stdio.h>

int main() {
    // Define o número máximo de casas que cada peça pode se mover
    const int max_casas_torre = 5;
    const int max_casas_bispo = 5;
    const int max_casas_rainha = 8;

    int contador; // Variável de controle para os loops

    // Simulação do movimento da Torre para a direita usando um loop 'for'
    printf("Movimento da Torre:\n");
    for (contador = 1; contador <= max_casas_torre; contador++) {
        printf("Direita\n"); // Imprime a direção do movimento
    }

    // Simulação do movimento do Bispo na diagonal para cima e à direita usando um loop 'while'
    printf("\nMovimento do Bispo:\n");
    contador = 1; // Reinicializa o contador
    while (contador <= max_casas_bispo) {
        printf("Cima Direita\n"); // Imprime a direção do movimento
        contador++; // Incrementa o contador para a próxima iteração
    }

    // Simulação do movimento da Rainha para a esquerda usando um loop 'do-while'
    printf("\nMovimento da Rainha:\n");
    contador = 1; // Reinicializa o contador
    do {
        printf("Esquerda\n"); // Imprime a direção do movimento
        contador++; // Incrementa o contador para a próxima iteração
    } while (contador <= max_casas_rainha); // A condição é verificada após a primeira iteração

    return 0;
}