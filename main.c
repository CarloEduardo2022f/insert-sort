#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
    
    int dados[10];
    const int TAM = (sizeof(dados)/sizeof(*dados));
    int i = 0;

    // preenchendo o vetor com números pseudos aleatórios de 0 a 1000 
    srand(time(NULL));
    for (int k = 0; k < TAM; k++){
        dados[k] = rand() %1000;
    }
    
    //imprime o vetor desordenado
    printf("\nAntes: \n");
     for (int k = 0; k < TAM; k++){
        printf("%d\n", dados[k]);
    }

    // insert-sort
    while (i < TAM){
       int j = i+1;
       int aux_num = i;
       while(j > 0){
           if ((j < TAM) && (dados[aux_num] > dados[j])){
               int aux = dados[aux_num];
               dados[aux_num] = dados[j];
               dados[j] = aux;
               aux_num--;
           }else{
               break;
           }
           j--;
       }
       i++;
    }

    printf("\nDepois\n");
    for (int k = 0; k < TAM; k++){
        printf("%d\n", dados[k]);
    }

    return 0;
}