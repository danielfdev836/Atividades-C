#include <stdio.h>

int main() {
    float nota, soma = 0, media;

    for (int i = 1; i <= 10; i++) {
        printf("Nota do cliente %d (0 a 10): ", i);
        scanf("%f", &nota);

        soma += nota;
    }

    media = soma / 10;

    printf("Media geral: %.2f\n", media);

    if (media > 7)
        printf("ALERTA: media acima de 7!\n");

    return 0;
}
