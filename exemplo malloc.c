#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int n;
    int *v;
    int i;
    printf("Entre com o tamanho do vetor: ");
    scanf("%d", &n);
    v = (int *)malloc(n * sizeof(int));
    for (i = 0; i < n; ++i) {
         v[i] = i;
    }
    for (i = 0; i < n; ++i) {
        printf("%d ", v[i]);
    }
    printf("\n");
    free(v);
    return 0;
}