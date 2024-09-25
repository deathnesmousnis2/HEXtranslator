#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void decimalToText(char *decimalString) {
    char *token = strtok(decimalString, " ");
    while (token != NULL) {
        int decimal = atoi(token);
        if (decimal >= 0 && decimal <= 255) {
            printf("%c", (char)decimal);
        }
        token = strtok(NULL, " ");
    }
    printf("\n");
}

void hexToText(char *hexString) {
    char *token = strtok(hexString, " ");
    while (token != NULL) {
        long decimalValue = strtol(token, NULL, 16);
        if (decimalValue >= 0 && decimalValue <= 255) {
            printf("%c", (char)decimalValue);
        }
        token = strtok(NULL, " ");
    }
    printf("\n");
}

int main() {
    printf("Welcome to Hex and Decimal Translator!\n");
    printf("\033[32m");
    printf("H   H  EEEEE  X   X \n");
    printf("H   H  E       X X  \n");
    printf("HHHHH  EEEEE    X   \n");
    printf("H   H  E       X X  \n");
    printf("H   H  EEEEE  X   X \n");
    printf("\033[0m");

    int traduction;
    printf("Escolha uma opção:\n");
    printf("[1] -- Decimal para Texto\n");
    printf("[2] -- Hexadecimal para Texto\n");
    printf("Escolha uma opção: ");
    scanf("%d", &traduction);
    getchar(); 

    if (traduction == 1) {
        char decimalString[256];
        printf("Digite os valores decimais separados por espaço: ");
        fgets(decimalString, sizeof(decimalString), stdin); 
        decimalToText(decimalString);
    } else if (traduction == 2) {
        char hexString[256];
        printf("Digite os valores hexadecimais separados por espaço: ");
        fgets(hexString, sizeof(hexString), stdin); 
        hexToText(hexString);
    } else {
        printf("Opção inválida, por favor inicie novamente a ferramenta.\n");
    }

    return 0;
}
