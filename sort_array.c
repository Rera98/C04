#include <stdio.h>

int main() {
    int n, i, j, temp;

    // Lire la taille du tableau

    scanf("%d", &n);

    int tab[n];

    // Lire les éléments du tableau

    for (i = 0; i < n; i++) {
        scanf("%d", &tab[i]);
    }

    // Tri à bulles
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (tab[j] > tab[j + 1]) {
                // Échanger les éléments
                temp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = temp;
            }
        }
    }

    // Afficher le tableau trié
    printf("Tableau trié : ");
    for (i = 0; i < n; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");

    return 0;
}
