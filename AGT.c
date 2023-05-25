#include <stdio.h>

void  addV(int lista[], int tamanho, int valor) {
    for (int i = 0; i < tamanho; i++) {
        lista[i] += valor;
    }
}

int main (){
    int lista[] = {1,2,3,4,5};
    int tamanho = sizeof(lista) / sizeof(lista[0]);
    int valor;

printf ("Digita o Valor ae: ");
scanf("%d", &valor);

addV(lista, tamanho, valor);

printf ("Lista modificada:\n");
for (int i = 0; i < tamanho; i++) {
    printf ("%d\t", lista[i]);
}
printf ("\n");

return 0;
}