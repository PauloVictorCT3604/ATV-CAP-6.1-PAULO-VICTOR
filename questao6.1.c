#include <stdio.h>
#include <stdlib.h>

#define MAX 5  

int p[MAX];  
int t = -1; 


void empilhar(int novo_elemento) {
            
            if (t < MAX - 1){  
            
            t++;            
            p[t] = novo_elemento;  
    
                printf("Elemento %d empilhado.\n", novo_elemento);
    
                } else{
                
                    printf("Erro: Pilha cheia.\n");
                
                }
}

void desempilhar(){
            
            if (t >= 0) { 
            
            int removido = p[t];  
            t--; 
            
                printf("Elemento %d desempilhado.\n", removido);
            
                } else{
                    
                    printf("Erro: Pilha vazia.\n");
            
                }
}

void exibirPilha(){
            
            if (t >= 0){  
            
                printf("Pilha: ");
            
                    for (int i = 0; i <= t; i++){
                        
                        printf("%d ", p[i]);
                    
                    }

                printf("\n");

                } else{

                printf("Pilha vazia.\n");
                
                }
}

int main() {

    empilhar(102);
    empilhar(34);
    empilhar(56);
    exibirPilha(); 

    desempilhar();
    exibirPilha(); 

    empilhar(7);
    exibirPilha();  

    return 0;
}
