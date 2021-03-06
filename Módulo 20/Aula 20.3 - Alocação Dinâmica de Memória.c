#include <stdio.h>
#include <stdlib.h>
//Função Realloc - Realocação de memória
//tem que ser alocado antes por:
//Malloc
//Calloc

int main(){
    int qtd, *p;

    printf("Informe a quantidade de elementos para o vetor: ");
    scanf("%d", &qtd);

    p = (int*)malloc(qtd * sizeof(int)); //3 x 4 = 12 bytes 

    if(p){

        printf("A variável p ocupa %ld bytes em memória. \n", qtd * sizeof(int));

        printf("Informe a quantidade de elementos para o vetor: ");
        scanf("%d", &qtd);

        p = (int*)realloc(p, qtd * sizeof(int));

        if(p){
            printf("A variável p ocupa %ld bytes em memória. \n", qtd * sizeof(int));
        }else{
            printf("Memória insuficiente");
        }

        
    }else{
        printf("Error: Memória insuficiente!");
    }
    //liberar a memória (desalocar)
    free(p);
    p = NULL; //medida de segurança
    return 0;
}