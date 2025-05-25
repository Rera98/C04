#include <stdio.h>

int main() {
    int n, i;
    int max, second;

    // Lecture du nombre d'éléments
 
    scanf("%d", &n);

    // Vérifier qu'il y a au moins deux éléments
    if (n < 2) {
        printf("Il faut au moins deux éléments.\n");
        return 1;
    }

    int tab[n]; // Déclaration du tableau

    // Lecture des éléments

    for (i = 0; i < n; i++) {
        scanf("%d", &tab[i]);
    }

    // Initialisation de max et second
    if (tab[0] > tab[1]) {
        max = tab[0];
        second = tab[1];
    } else {
        max = tab[1];
        second = tab[0];
    }

    // Parcourir le reste du tableau
    for (i = 2; i < n; i++) {
        if (tab[i] > max) {
            second = max;
            max = tab[i];
        } else if (tab[i] > second && tab[i] != max) {
            second = tab[i];
        }
    }

    // Affichage du résultat
    printf("Le deuxième plus grand nombre est : %d\n", second);

    return 0;
}
