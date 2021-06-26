#include <stdio.h>
#include<locale.h>

char tabela [3][3];
int chute,i,j;

void iniciaVelha(){
  printf("\n");
  
  for(int i = 0; i < 3; i++){
    printf(" \t \n");
    for(int j = 0; j < 3;j++){
      printf("\t [ %c ] ", tabela[i][j]);
      
    } 
  }
  printf("\n");
}
void atualizaVelha(char i, char j){
  char x,y;
  tabela[i][j] = 'x';  
    for(int i = 0; i < 3; i++){
    printf(" \t \n");
    for(int j = 0; j < 3;j++){
      
    } 
  }
  iniciaVelha();
}
void mostraJogada(){}
int main(void) {

  printf("\n");
  printf(" \t #######################################################\n");
  printf(" \t############### ESSE É O JOGO DA VELHA ################\n");
  printf(" \t #######################################################\n");
  iniciaVelha();
  printf("\n \n ");
    do{
    printf("\n");
    printf("Digite a linha a ser preenchida: ");
    scanf("%d",&i);
    printf("Digite a coluna a ser preenchida: ");
    scanf("%d",&j);
     atualizaVelha(i,j);
    }while(i != 9 && j != 9);

 
  



  return 0;
}