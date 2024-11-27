#include <stdio.h>

int main() {
    // Declaração do primeiro vetor e seu tamanho
    int vetor1[] = {7, 5, 10, 6, 8};
    int n1 = 5;
    int i, j, temp;

    // Bubble Sort
    printf("Bubble Sort:\n");
    printf("Vetor antes da ordenacao:\n");
    for (i = 0; i < n1; i++) { // Mostra o vetor inicial
        printf("%d ", vetor1[i]);
    }
    printf("\n");

    // Algoritmo Bubble Sort
    for (i = 0; i < n1 - 1; i++) { // Passa por cada elemento
        for (j = 0; j < n1 - 1 - i; j++) { // Compara elementos adjacentes
            if (vetor1[j] > vetor1[j + 1]) { // Verifica se precisa trocar
                temp = vetor1[j];          // Troca os elementos
                vetor1[j] = vetor1[j + 1];
                vetor1[j + 1] = temp;
            }
        }
    }

    printf("Vetor depois da ordenacao:\n");
    for (i = 0; i < n1; i++) { // Mostra o vetor ordenado
        printf("%d ", vetor1[i]);
    }
    printf("\n\n");

    // Declaração do segundo vetor e seu tamanho
    int vetor2[] = {3, 0, 1, 8, 7, 2, 5, 4, 9, 6};
    int n2 = 10;

    // Insertion Sort
    printf("Insertion Sort:\n");
    printf("Vetor antes da ordenacao:\n");
    for (i = 0; i < n2; i++) { // Mostra o vetor inicial
        printf("%d ", vetor2[i]);
    }
    printf("\n");

    // Algoritmo Insertion Sort
    for (i = 1; i < n2; i++) {
        temp = vetor2[i]; // Elemento atual que será inserido no lugar correto
        j = i - 1;
        while (j >= 0 && vetor2[j] > temp) { // Move elementos maiores que o atual
            vetor2[j + 1] = vetor2[j];
            j--;
        }
        vetor2[j + 1] = temp; // Insere o elemento na posição correta
    }

    printf("Vetor depois da ordenacao:\n");
    for (i = 0; i < n2; i++) { // Mostra o vetor ordenado
        printf("%d ", vetor2[i]);
    }
    printf("\n\n");

    // Declaração do terceiro vetor e seu tamanho
    int vetor3[] = {7, 5, 1, 8, 3};
    int n3 = 5;

    // Selection Sort
    printf("Selection Sort:\n");
    printf("Vetor antes da ordenacao:\n");
    for (i = 0; i < n3; i++) { // Mostra o vetor inicial
        printf("%d ", vetor3[i]);
    }
    printf("\n");

    // Algoritmo Selection Sort
    for (i = 0; i < n3 - 1; i++) {
        int menor = i; // Assume que o menor elemento está na posição atual
        for (j = i + 1; j < n3; j++) { // Procura o menor elemento no restante do vetor
            if (vetor3[j] < vetor3[menor]) {
                menor = j; // Atualiza a posição do menor elemento
            }
        }
        // Troca o menor elemento encontrado com o elemento atual
        temp = vetor3[i];
        vetor3[i] = vetor3[menor];
        vetor3[menor] = temp;
    }

    printf("Vetor depois da ordenacao:\n");
    for (i = 0; i < n3; i++) { // Mostra o vetor ordenado
        printf("%d ", vetor3[i]);
    }
    printf("\n");

    return 0;
}


