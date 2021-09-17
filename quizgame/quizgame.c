/**
 * @author atomkern <github.com/atom1488>
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    
    char answer, goodAnswer;
    // char for the answer and the good answer

    srand(time(NULL)); //timer for the rand() function
    
    int randomNum = rand() % 3; //get a random number

    printf("QUIZ : Répondez avec la lettre qui correspond a la reponse\n");

    switch(randomNum) // get a question corresponding to the random number
    {
        case 0:
            printf("Quel est le meilleur serveur de tout nicorne?");
            printf("\nA: L'Appel du Vide\nB: clounerie\n");

            scanf("%c", &answer); //scan for char

            goodAnswer = 'A';

            if (answer == goodAnswer) { 
                printf("Bonne réponse\n");
            } else {
                printf("Mauvaise réponse, tu es nul.\n");
            }
            break;
        case 1:
            printf("En quel année Clovis est-il devenu Roi des Francs ?");
            printf("\nA: 867\nB: 394\nC: 839\nD: 482\n");

            scanf("%c", &answer);

            goodAnswer = 'D';

            if (answer == goodAnswer) {
                printf("Bonne réponse\n");
            } else {
                printf("Mauvaise réponse, tu es nul dsl\n");
            }
            break;
        case 2:
            printf("En quel année s'est déroulé la bataille de Poitiers ?\n");
            printf("\nA: 823\nB: 1381\nC: 732\nD: 443\n");

            scanf("%c", &answer);

            goodAnswer = 'C';

            if (answer == goodAnswer) {
                printf("Bonne réponse\n");
            } else {
                printf("Mauvaise réponse, tu es nul dsl\n");
            }
            break;
        default:
            break;
    }
 
}
