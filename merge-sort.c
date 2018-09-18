#include<stdlib.h>
#include<stdio.h>


mergeSort(int *A, int ini, int fim){
    if(ini < fim){
        int meio = ((fim + 1) + ini)/2;
        printf("%d", meio);
    }



}


/*Imprimir vetor*/
void ImprimirVetor(int *A, int size){
    int i;
    for (i=0; i < size; i++)
        printf("%d ", A[i]);
    printf("\n");
}

/*Gerar vetor*/
void GerarVetor(int *A, int size){
    int i;
    srand(time(NULL));
    for(i=0; i<size; i++)
        A[i] = rand()% 100000;
}

int main(){
    int i;
    int* vet;
    int size = 100;
    vet = (int *) malloc(size * sizeof (int));
    GerarVetor(vet, size);
    ImprimirVetor(vet, size);

    mergeSort(vet, 0, size - 1);


  return 0;
}
