#include <stdio.h>

int main() {
    int n, i, max;

    // Lire le nombre d'éléments
 
    scanf("%d", &n);

    int tableau[n];  // Déclaration du tableau

    // Lecture des éléments du tableau
   
    for (i = 0; i < n; i++) {
        scanf("%d", &tableau[i]);
    }

    // Supposons que le premier élément est le maximum
    max = tableau[0];

    // Recherche du maximum
    for (i = 1; i < n; i++) {
        if (tableau[i] > max) {
            max = tableau[i];
        }
    }

    // Affichage du résultat
    printf("Le maximum est : %d\n", max);

    return 0;
}
