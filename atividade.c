/*
    @autor: Mariana Bernardo;
    @data: 21/04/2021;
    @nome: Menu 14 opções
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese"); //para acentuação

    int i, j, menu, n, m, aux, peso, valor, menor, maior, media, mediap;
    int cont = 0, acima = 0, soma = 0, soma2 = 0, mult = 1, quant = 0;
    int num[quant];

    //menu
    printf("__________________________________________________________________\n");
    printf("                           MENU\n");
    printf("__________________________________________________________________\n");
    printf("1.  Informar a quantidade de números a tratar\n");
    printf("2.  Digitar os números\n");
    printf("3.  Informar o menor número\n");
    printf("4.  Informar o maior número\n");
    printf("5.  Retornar o n-ésimo número da lista\n");
    printf("6.  Calcular a soma dos números\n");
    printf("7.  Calcular o produto dos números\n");
    printf("8.  Multiplicar todos os números por uma valor\n");
    printf("9.  Calcular a média aritmética do números\n");
    printf("10. Informar quantos número sestão acima da média aritmética\n");
    printf("11. Calcular a média ponderada dos números\n");
    printf("12. Ordenar os números em ordem crescente\n");
    printf("13. Ordenar os números em ordem decrescente\n");
    printf("14. Terminar a execução\n");
    printf("__________________________________________________________________\n");

    //inicio
    do{
        printf("Digite sua escolha do menu (apenas o número): \n");
        scanf("%d", &menu);

        switch (menu)
        {
            case 1:
                while (quant < 5 || quant > 15){
                    printf("---> Quantidade de números (entre 5 e 15): \n");
                    scanf("%d", &quant);
                }
                quant -= 1;
                cont = 1;
                printf("__________________________________________________________________\n");
                break;
            case 2:
                if (cont >= 1) {
                    printf("---> Digitar números (entre -100 e 500, diferente de 0 e indivisível por 8): \n");
                    for (i = 0; i <= quant; i++){
                        printf("Posição %d: ", i+1);
                        scanf("%d", &n);
                        while (n == 0 || n < -100 || n > 500 || n % 8 == 0) {
                            printf("Número inválido. Digite outro valor!\n");
                            printf("Posição %d: ", i+1);
                            scanf("%d", &n);
                        }
                        num[i] = n;
                    }
                    cont = 2;
                } else {
                    printf("Por gentileza, retorne à opção 1.\n");
                }

                printf("__________________________________________________________________\n");
                break;
            case 3:
                if (cont == 2){
                    menor = num[0];
                    for (i = 0; i <= quant; i++){
                        if (num[i] < menor){
                            menor = num[i];
                        }
                    }
                    printf("O menor número é: %d\n", menor);
                } else if (cont == 1){
                    printf("Por gentileza, retorne à opção 2.\n");
                } else {
                    printf("Por gentileza, retorne à opção 1.\n");
                }
                printf("__________________________________________________________________\n");
                break;
            case 4:
                if (cont == 2) {
                    maior = num[0];
                    for (i = 0; i <= quant; i++){
                        if (num[i] > maior) {
                            maior = num[i];
                        }
                    }
                    printf("O maior número é: %d\n", maior);
                }else if (cont == 1){
                    printf("Por gentileza, retorne à opção 2.\n");
                } else {
                    printf("Por gentileza, retorne à opção 1.\n");
                }
                printf("__________________________________________________________________\n");
                break;
            case 5:
                if (cont == 2) {
                    printf("Qual posição deseja retornar? ");
                    scanf("%d", &m);
                    printf("\nNa posição %d temos: %d\n", m, num[m-1]);
                } else if (cont == 1){
                    printf("Por gentileza, retorne à opção 2.\n");
                } else {
                    printf("Por gentileza, retorne à opção 1.\n");
                }
                printf("__________________________________________________________________\n");
                break;
            case 6:
                if (cont == 2){
                    for (i = 0; i <= quant; i++){
                    soma += num[i];
                    }
                    printf("Soma = %d\n", soma);
                    soma = 0;
                } else if (cont == 1){
                    printf("Por gentileza, retorne à opção 2.\n");
                } else {
                    printf("Por gentileza, retorne à opção 1.\n");
                }
                printf("__________________________________________________________________\n");
                break;
            case 7:
                if (cont == 2){
                    for (i = 0; i <= quant; i++){
                    mult *= num[i];
                }
                printf("Mult = %d\n", mult);
                mult = 1;
                } else if (cont == 1){
                    printf("Por gentileza, retorne à opção 2.\n");
                } else {
                    printf("Por gentileza, retorne à opção 1.\n");
                }
                printf("__________________________________________________________________\n");
                break;
            case 8:
                if (cont == 2) {
                    printf("Multiplicar por: ");
                    scanf("%d", &n);
                    while (n == 0){
                        printf("\nMultiplicação inválida, digite novamente!\n");
                        printf("Multiplicar por: ");
                        scanf("%d", &n);
                    }
                    for (i = 0; i <= quant; i++){
                        num[i] *= n;
                    }
                    printf("\n-> Lista:\n");
                    for (i = 0; i <= quant; i++){
                        printf("num[%d] = %d\n", i, num[i]);
                    }
                } else if (cont == 1){
                    printf("Por gentileza, retorne à opção 2.\n");
                } else {
                    printf("Por gentileza, retorne à opção 1.\n");
                }
                printf("__________________________________________________________________\n");
                break;
            case 9:
                if (cont == 2){
                    for (i = 0; i <= quant; i++){
                        soma += num[i];
                    }
                    media = soma / (quant + 1);
                    printf("Média aritmética = %d\n", media);
                    soma = 0;
                } else if (cont == 1){
                    printf("Por gentileza, retorne à opção 2.\n");
                } else {
                    printf("Por gentileza, retorne à opção 1.\n");
                }
                printf("__________________________________________________________________\n");
                break;
            case 10:
                if (cont == 2){
                    for (i = 0; i <= quant; i++){
                        soma += num[i];
                    }
                    media = soma / (quant + 1);
                    for (i = 0; i <= quant; i++) {
                        if (num[i] > media){
                            acima += 1;
                        }
                    }
                    printf("Quantidade de números acima da média: %d\n", acima);
                    acima = 0;
                    soma = 0;
                } else if (cont == 1){
                    printf("Por gentileza, retorne à opção 2.\n");
                } else {
                    printf("Por gentileza, retorne à opção 1.\n");
                }
                printf("__________________________________________________________________\n");
                break;
            case 11:
                if (cont == 2){
                    for (i = 0; i <= quant; i++){
                        printf("Peso da posição %d:", i+1);
                        scanf("%d", &peso);
                        valor = num[i] * peso;
                        soma2 += valor;
                    }
                    mediap = soma2 / (quant + 1);
                    printf("\nMédia ponderada = %d\n", mediap);
                    soma2 = 0;
                } else if (cont == 1){
                    printf("Por gentileza, retorne à opção 2.\n");
                } else {
                    printf("Por gentileza, retorne à opção 1.\n");
                }
                printf("__________________________________________________________________\n");
                break;
            case 12:
                if (cont == 2){
                    for (i = 0; i <= quant; i++){
                        for (j = i + 1; j <= quant; j++){
                            if (num[i] > num[j]){
                                aux = num[i];
                                num[i] = num[j];
                                num[j] = aux;
                            }
                        }
                    }
                    printf("\n-> Nova Lista:\n");
                    for (i = 0; i <= quant; i++){
                        printf("num[%d] = %d\n", i, num[i]);
                    }
                } else if (cont == 1){
                    printf("Por gentileza, retorne à opção 2.\n");
                } else {
                    printf("Por gentileza, retorne à opção 1.\n");
                }
                printf("__________________________________________________________________\n");
                break;
            case 13:
                if (cont == 2){
                    for (i = 0; i <= quant; i++){
                        for (j = i + 1; j <= quant; j++){
                            if (num[i] < num[j]){
                                aux = num[i];
                                num[i] = num[j];
                                num[j] = aux;
                            }
                        }
                    }
                    printf("\n-> Nova Lista:\n");
                    for (i = 0; i <= quant; i++){
                        printf("num[%d] = %d\n", i, num[i]);
                    }
                } else if (cont == 1){
                    printf("Por gentileza, retorne à opção 2.\n");
                } else {
                    printf("Por gentileza, retorne à opção 1.\n");
                }
                printf("__________________________________________________________________\n");
                break;
            case 14:
                break;
            default:
                printf("Opção inválida. Escolha novamente.\n");
                printf("__________________________________________________________________\n");
        }

    } while (menu != 14);

    //fim
    printf("\n-> Lista:\n");
    if (cont < 2){
        printf("A lista não foi definida completamente.\n");
    } else {
        for (i = 0; i <= quant; i++){
            printf("num[%d] = %d\n", i, num[i]);
        }
    }

    printf("__________________________________________________________________\n");
    printf("                     FIM DO PROGRAMA\n");
    printf("__________________________________________________________________\n");

    system("pause");
    return 0;
}
