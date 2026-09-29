#include <stdio.h>

int main() {
    float consumo, soma = 0, media;

    for (int i = 1; i <= 5; i++) {
        printf("Consumo do morador %d (m3): ", i);
        scanf("%f", &consumo);

        if (consumo <= 20)
            printf("Dentro da media.\n");
        else
            printf("Acima da media.\n");

        soma += consumo;
    }

    media = soma / 5;

    printf("Consumo medio geral: %.2f m3\n", media);

    return 0;
}
