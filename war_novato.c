#include <stdio.h>
#include <string.h> // inclusão das bibliotecas necessárias


typedef struct{
    char kingdon[50]; // criacão da estrutura
    int troops;
    char color[20];
} army;


int main() {
// Menu inicial
printf("### Sofware of War ###\n");
printf("\n");

// interface do menu
printf("Chose one option:\n");
printf("1 - Begin the Game\n");
printf("2 - Exit\n");
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

army territory[5]; // criação do vetor de estruturas

// Cadastro de territórios
printf("==========================\n");
for (int i = 0; i < 5; i++) {
    printf("Enter the kingdom name: ");
    scanf("%s", territory[i].kingdon);
    printf("--------------------------\n");
    printf("Enter the number of troops: ");
    scanf("%d", &territory[i].troops);
    printf("--------------------------\n");
    printf("Enter the color: ");
    scanf("%s", territory[i].color);
    printf("==========================\n");
}
printf("\n");
printf("### Displaying the registered kingdoms ###\n"); // orientação ao usuário
printf("\n");

// Exibição dos territórios cadastrados
printf("==========================\n");
for (int a = 0; a < 5; a++) {
    printf("Kingdom: %s\n", territory[a].kingdon);
    printf("Troops: %d\n", territory[a].troops);
    printf("Color: %s\n", territory[a].color);
    printf("--------------------------\n");
}

}