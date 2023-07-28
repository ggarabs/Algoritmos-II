#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int busca_linear(int v[], int n, int e){
  int i;
  int cont = 0;
  for(int i = 0; i < n; i++){
    cont++;
    if(v[i] == e){
      printf("Contador[linear]: %d\n", cont);
      return i;
    }
  }
  printf("Contador[linear]: %d\n", cont);
  return -1;
}

void preenche_vetor(int v[], int n){
  srand(time(NULL));
  int ant = 1;
  for(int i = 0; i < n; i++){
    v[i] = rand()%10 + ant;
    ant = v[i];
  }
}

void imprime_vetor(int v[], int n){
  for(int i = 0; i < n; i++){
    printf("%d ", v[i]);
  }
  printf("\n");
}

int main(){
  clock_t start, end;
  double cpu_time_used;

  start = clock();

  int num;

  printf("Digite o número de elementos do vetor: ");
  scanf("%d", &num);

  int lista[num];
  printf("Vetor: ");
  preenche_vetor(lista, num);

  imprime_vetor(lista, num);

  int value;
  printf("Digite o número a ser buscado no vetor: ");
  scanf("%d", &value);

  printf("Resultado: %d\n", busca_linear(lista, num, value));

  end = clock()-start;
  cpu_time_used = ((double)end)/CLOCKS_PER_SEC;

  printf("%f\n", cpu_time_used);
  
  return 0;
}