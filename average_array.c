#include <stdio.h>

int main() {
    // Déclaration des variables
    int n, i, somme = 0;
    float moyenne;

    // Lire le nombre d'éléments

    scanf("%d", &n);

    int tableau[n]; // Déclaration du tableau

    // Lire les éléments du tableau
   
    for (i = 0; i < n; i++) {
        scanf("%d", &tableau[i]);
        somme = somme + tableau[i]; // Ajoute chaque élément à la somme
    }

    // Calcul de la moyenne
    moyenne = somme / n;

    // Affichage de la moyenne
    printf("La moyenne est : %.1f\n", moyenne);

    return 0;
}
