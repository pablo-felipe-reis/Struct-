#include <stdio.h>  
#include <stdlib.h>  
#include <locale.h>
#include <string.h>

#define TAM 50

struct tipo_pessoa{
    int idade;
    float peso;
    char nome[TAM];
};

typedef struct tipo_pessoa tipo_pessoa;

// FUNÇÃO PARA LIMPAR BUFFER (CORRETA)
void limpar_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main(){
    setlocale(LC_ALL, "Portuguese");

    // Criando e Inicializando
    tipo_pessoa pes = {0, 0.0, "Teste"};

    printf("Inicio:\n");
    printf("pes.idade: %d\n", pes.idade);
    printf("pes.peso: %.2f\n",pes.peso);  
    printf("pes.nome: %s\n",  pes.nome);    
    // Atribuindo valores aos campos 
    pes.idade = 10;
    pes.peso = 99.99;
    strcpy(pes.nome, "Texto");
    
    printf("\nAlterando os campos via código:\n");
    printf("pes.idade: %d\n", pes.idade); 
    printf("pes.peso: %.2f\n",pes.peso);  
    printf("pes.nome: %s\n",  pes.nome);   

    // Solicitando inserção via teclado 

    printf("\nInsira um número inteiro: ");
    scanf("%d", &pes.idade);
    limpar_buffer();  // ← LIMPA O BUFFER APÓS O PRIMEIRO SCANF

    printf("Insira um número real: ");
    scanf("%f", &pes.peso);
    limpar_buffer();  // ← LIMPA O BUFFER APÓS O SEGUNDO SCANF

    printf("Insira uma palavra: ");
    // Para ler string COM ESPAÇOS, use fgets em vez de scanf
    fgets(pes.nome, TAM, stdin);
    // Remove o \n que fgets captura
    pes.nome[strcspn(pes.nome, "\n")] = '\0';

    printf("\nAlterando com dados do usuário: \n");
    printf("pes.idade: %d\n", pes.idade);
    printf("pes.peso: %.2f\n", pes.peso);
    printf("pes.nome: %s\n", pes.nome);


    


    system("pause");
    return 0;
}