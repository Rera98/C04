#include <stdio.h>

int main() {
    // Déclarations
    int n, i, j;
    int unique[100], tab[100];
    int k = 0, doublon;

   // Lecture de n
    scanf("%d", &n);

   // Remplissage du tableau
    for (i = 0; i < n; i++) {
        scanf("%d", &tab[i]);
    }
    // Vérification des doublons
    for (i = 0; i < n; i++) {
        doublon = 0;
        for (j = 0; j < k; j++) {
            if (tab[i] == unique[j]) {
                doublon = 1;
                break;
            }
        }
        
        if (!doublon) {
            unique[k] = tab[i];
            k++;
        }
    }

    printf("Après suppression des doublons : ");
    for (i = 0; i < k; i++) {
        printf("%d ", unique[i]);
    }
    printf("\n");

    return 0;
}
