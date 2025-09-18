#include <stdio.h>
#include <string.h> // inclusão das bibliotecas necessárias
#include <stdlib.h> // necessário para malloc


typedef struct{
    char kingdon[30]; // criacão da estrutura
    int troops;
    char color[10];
} army;

void registration(army *territory){
    printf("==========================\n");
    for (int i = 0; i < 5; i++) {
        printf("Enter the %d kingdom name: ", i+1);
        scanf("%s", (territory+i)->kingdon);
        printf("--------------------------\n");
        printf("Enter the %d number of troops: ", i+1);
        scanf("%d",  &(territory+i)->troops);
        printf("--------------------------\n"); 
        printf("Enter the %d color: ", i+1);
        scanf("%s",  (territory+i)->color);
        printf("==========================\n");
    }
}

void display_territories(army *territory){
    for (int a = 0; a < 5; a++) {
        printf("Kingdom: %s\n", (territory+a)->kingdon);
        printf("Troops: %d\n", (territory+a)->troops);
        printf("Color: %s\n", (territory+a)->color);
        printf("--------------------------\n");
}
}

void options_attack(army *territory){ //Interface do Ataque entre territórios
    printf("### starting wars in the field ###\n");
    for (int a = 0; a < 5; a++) {
        printf("%d Kingdom: %s\n", a, (territory+a)->kingdon);
    }
    printf("--- select the attacking kingdom ---\n");
    int atk;
    int dfs;
    printf("For the attack: ");         //PENDENTE, AJEITAR MOSTRAGEM DOS REINOS NO TERMINAL NA HORA DA ESCOLHA DE ATK E DEFESA E DESCOBRIR O PORQUÊ O CÓDIGO NÃO ENCERRA AO SELECIONAR O MESMO ATACANTE E DEFENSOR!
    scanf("%d", &atk);
    printf("--- select the defensing kingdom ---\n");
    for (int a = 0; a < 5; a++) {
        printf("%d Kingdom: %s\n", a, (territory+a)->kingdon);
    }
    printf("WARNING: DONT SELECT THE SAME KINGDOM FOR THE ATTACK AND DEFENSE!!\n");
    printf("For the defense: ");
    scanf("%d", dfs);
    if (atk == dfs)
    {
        printf("YOU SELECTED THE SAME KINGDOM TO THE DEFENSE AND ATTACK, RUN DE SCRIPT AGAIN... ");
        exit(0);
    }
    else if (atk != dfs){
        printf("We will begin this battle to the and...");
    }
    else {
        printf("Error!");
    }
    
    

    
}

void display_attack(){

}

int main() {
// Menu inicial
printf("### Sofware of War ###\n");
printf("\n");

// interface do menu
printf("=================\n");
printf("Chose one option:\n");
printf("1 - Begin the Game\n");
printf("2 - Exit\n");
printf("=================\n");
printf("Chose your option: ");
int chose1 = 0;
scanf("%d", &chose1);
if (chose1 == 2)
{
    printf("Exiting the game...\n");
    return 0;
} else if (chose1 == 1)
{
    printf("Starting the game...\n");
} else {
    printf("Invalid option. Exiting the game...\n");
    return 0;
}
printf("\n");

army *territory = (army*) malloc(5 * sizeof(army)); //Alocamento de memória para o vetor da Struct "army"
int numeroaleaatorio = 0 + (rand() % (6 - 1 + 1));  

// Cadastro de territórios
registration(territory);
printf("\n");
printf("### Displaying the registered kingdoms ###\n"); // orientação ao usuário
printf("\n");

// Exibição dos territórios cadastrados
printf("==========================\n");
display_territories(territory);

//Interface de ataque
options_attack(territory);

return 0;
}