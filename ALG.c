#include <stdio.h>
#include <stdlib.h>

// int main () {

//     int idade;
    
//     printf("Insira a sua idade:\n");
//     scanf("%d", &idade);
    
//     printf("Sua idade: %d.", idade);
// }

// SEPARA

// int main () {
    
//     int idade;

//     printf("Qual a sua idade:\n");
//     scanf ("%d", &idade);

//     if (idade >= 18){
//         printf("maior de idade\n");
//     }
//     else {
//         printf("menor de idade\n");
//     }

//     return 0;

// }

// SEPARA

// int main () {

//     int i;
//     i = 1;

//     while(i <= 1000){
//         printf ("%d ", i);
//         i = i + 1;
//     } 
//     return 0;
// }

// int main () {

// int vetor[5], aux, i, x;

// for (i = 0;i < 5;i++){
//     printf ("\ninsira o valor para a posicao %d: ", i + 1);
//     scanf ("%d", &vetor[i]);
// }
// for (i = 0;i < 5;i++){
//     for (x = i + 1;x < 5;x++) {
        
//         if (vetor[i] > vetor[x]){
//         aux = vetor[i];
//         vetor[i] = vetor[x];
//         vetor[x] = aux;
//         }
//     }
// }

// printf ("\nOrdem Crescente:\n");

// for (i = 0;i < 5; i++){
//     printf ("%d\n", vetor[i]);
// }

// for (i = 0;i < 5;i++){
//     for (x = i + 1;x < 5;x++) {
        
//         if (vetor[i] < vetor[x]){
//         aux = vetor[i];
//         vetor[i] = vetor[x];
//         vetor[x] = aux;
//         }
//     }
// }

// printf ("\nOrdem Decrescente:\n");


// for (i = 0;i < 5; i++){
//     printf ("%d\n", vetor[i]);
// }
// }

// SEPARA

// int main()
// {

// int valor[5], i, soma = 0;

// for(i = 0;i < 5;i++){
//     printf ("Qual o %do valor?\n ", i+1);
//     scanf ("%d", &valor[i]);
//     soma = soma + valor[i];
// }

// printf("A soma vale: %d", soma);

// }

// SEPARA

// int main()
// {
//     int n, i, tam;
//     int vetor;
//     printf ("Digite um numero inteiro: ");
//     scanf (" %i", &n);
//     printf ("Digite o tamanho do vetor: ");
//     scanf (" %i", &tam);
//     vetor = malloc(tam * sizeof(int));
//     printf ("Digite os numeros do vetor: ");
//     if (vetor != NULL)
//     {
//         for (i = 0; i < tam; i++)
//         {
//             scanf (" %i", &vetor[i]);
//         }
//     }
//     else
//     {
//         return 1;
//     }
//     printf ("v = [");
//     if (vetor != NULL)
//     {
//         for (i = 0; i < tam; i++)
//         {   
//             vetor[i] = vetor[i] + n;
//             if (i < tam-1)
//             {
//                 printf ("%i,", vetor[i]);
//             }
//             else
//             {
//                 printf ("%i", vetor[i]);
//             }
//         }
//     }
//     else
//     {
//         return 1;
//     }
//     printf ("]\n");
//     return 0;
// }

// SEPARA

// int main()

// {
//     int i, n, tam, vetor;
//     printf ("Digite um numero inteiro: ");
//     scanf (" %i", &n);
//     printf ("Digite o tamanho do vetor: ");
//     scanf (" %i", &tam);
//     vetor = malloc(tam * sizeof(int));
//     printf ("Digite os elementos do vetor: ");
//     if (vetor != NULL)
//     {
//         for (i = 0; i < tam; i++)
//         {
//             scanf (" %i", &vetor[i]);
//         }
//         printf ("v = [");
//         for (i = 0; i < tam; i += 2)
//         {
//             vetor [i] = vetor[i] + n;
//         }
//         for (i = 0; i < tam; i++)
//         {
//             if (i < tam - 1)
//             {
//                 printf ("%i,", vetor[i]);
//             }
//             else
//             {
//                 printf ("%i", vetor[i]);
//             }
//         }
//     }
//     else
//     {
//         return 1;
//     }

//     printf ("]\n");
    
//     return 0;
// }

//SEPARA

// int main()
// {
//     int indice, numero, inicio, meio, fim, bin = -1, vetor;
    
//     printf("Digite o tamanho do vetor: ");
//     scanf(" %i", &fim);
//     meio = (fim-1)/2;
//     vetor = malloc(fim*sizeof(int));
    
//     printf("Digite os elementos do vetor: ");
//     if (vetor != NULL)
//     {
//         for (indice = 0; indice < fim; indice++)
//         {
//             scanf(" %i", &vetor[indice]);
//         }
//         printf ("Digite um numero: ");
//         scanf(" %i", &numero);
//         while (bin == -1)
//         {
//             if (numero == vetor[meio])
//             {
//                 bin = 1;
//             }
//             else if (numero > vetor[meio])
//             {
//                 inicio = meio;
//                 meio = (fim + inicio)/2;
//                 bin = -1;
//             }
//             else
//             {
//                 fim = meio;
//                 meio = (fim)/2;
//                 bin = -1;
//             }
//         }
//         printf("\n\nO numero %i esta na posicao %i", numero, meio);
//     }
//     else
//     {
//         return 1;
//     }
//     return 0;
// }

// int main () {

//     int i, tam;
//     printf ("Escreva o tamanho do vetor: ");
//     scanf ("%d", &tam);
    
//     int vetor[tam];

//     for (i = 0;i < tam;i++){
        
//         scanf ("%d", &vetor[i]);
//     }

//     for (i = 0;i < tam;i++){
        
//         printf ("%d", vetor[i]);
//     }
    
// }