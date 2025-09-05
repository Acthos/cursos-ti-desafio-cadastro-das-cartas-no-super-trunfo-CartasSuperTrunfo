#include <stdio.h>
    int main(){

        //Cadastrando a primeira carta
        char estado1;
        char codigo1[4];
        char cidade1[50];
        int população1;
        float area1;
        float pib1;
        int pontos_turisticos1;

            printf(" Cadastrando 1º carta \n");
            printf(" Digite o estado ( A-H ):");
            scanf("%c", &estado1);

            printf(" Digite o código da carta:");
            scanf("%s", &codigo1);

            printf(" Digite o nome da cidade:");
            scanf("%s", &cidade1);

            printf(" Digite o número da população:");
            scanf("%d", &população1);

            printf("Digite a Área em km²:");
            scanf("%f", &area1);

            printf(" Digite o número do PIB:");
            scanf("%f", &pib1);

            printf(" Digite a quantidade de pontos turisticos:");
            scanf("%d", &pontos_turisticos1);


        // Aqui nesta linha acabamos o cadastro da primeira carta.


        
        //Cadastrando a segunda carta
        char estado2;
        char codigo2[4];
        char cidade2[50];
        int população2;
        float area2;
        float pib2;
        int pontos_turisticos2;


            printf(" Cadastrando 2º carta \n");
            printf(" Digite o estado ( A-H ):\n");
            scanf(" %c: \n", &estado2);

            printf(" Digite o código da carta:");
            scanf("%s:\n", &codigo2);

            printf(" Digite o nome da cidade:");
            scanf("%s:\n", &cidade2);

            printf(" Digite o número da população:");
            scanf("%d:\n", &população2);

            printf("Digite a Área em km²:");
            scanf("%f:\n", &area2);

            printf(" Digite o número do PIB:");
            scanf("%f:\n", &pib2);

            printf(" Digite a quantidade de pontos turisticos:");
            scanf("%d:\n", &pontos_turisticos2);
        


        // Aqui nesta linha acabamos o cadastro da primeira carta.
        // Abaixo vemos as carácteriscas da primeira carta.


            printf(" 1º carta:\n");
                printf("Estado: %c\n", estado1);
                printf("Código: %s\n", codigo1);
                printf("Nome da cidade:%s\n", cidade1);
                printf("População:%d\n", população1); 
                printf("Área: %.2f km²\n", area1);
                printf("Pib: %.2f bilhões de reais\n", pib1);
                printf("Pontos turisticos:%d\n", pontos_turisticos1);

        // Abaixo vemos as carácteristicas da segunda carta.]

                printf(" 2º carta:\n");
                printf("Estado: %c \n", estado2);
                printf("Código: %s \n", codigo2);
                printf("Nome da cidade: %s \n", cidade2);
                printf("População: %d \n", população2); 
                printf("Área: %.2f km²\n", area2);
                printf("Pib: %.2f bilhões de reais \n", pib2);
                printf("Pontos turisticos: %d\n", pontos_turisticos2);

    return 0;
}
