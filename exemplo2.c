#include <stdio.h>  
#include <stdlib.h>  
#include <locale.h>
#include <string.h>

#define TAM 3

struct tipo_pessoa{
    int idade;
    float peso;
    char nome[50];
};

typedef struct tipo_pessoa tipo_pessoa;

int main(){
    setlocale(LC_ALL, "Portuguese");  // 
    tipo_pessoa lista[TAM];
    int i;
    
   
    for (i = 0; i < TAM; i++){   //laço de repetição , quando você souber o quantidade de vezes a ser executado.

        printf("\nInsira os dados (%d):\n", i+1);
        
        puts("Nome: ");
        scanf("%49[^\n]", &lista[i].nome);    // [^\n] este trecho permite a ler o sacanf consegue ler espaços
        fflush(stdin);
        
        puts("Idade: ");
        scanf("%d" , &lista[i].idade);
        fflush(stdin)

    puts("Peso: ");
      scanf("%f",&lista[i].peso);
        fflush(stdin);
    }
    
        system("cls")

    puts("\nSeus dados:\n");

    for (i = 0; i < TAM; i++){
        printf("------------Pessoa %d------------\n", i+1);
        printf("\tNome: %s\n", lista[i].nome);
        printf("\tIdade: %d\n", lista[i].idade);
        printf("\tPeso: %.2f\n", lista[i].peso);
    }
    printf("-------------------------------------\n");

    system("pause");
    return 0;
}