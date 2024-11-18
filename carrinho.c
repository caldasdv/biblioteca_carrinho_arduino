#include "carrinho.h"

void inicializarCarrinho(){
  pinMode(INT1, OUTPUT);
  pinMode(INT2, OUTPUT);
  pinMode(INT3, OUTPUT);
  pinMode(INT4, OUTPUT);
  
  // configurando os motores
  pinMode(enableA, OUTPUT);
  pinMode(enableB, OUTPUT);

  //Habilita os motores
  digitalWrite(enableA, HIGH);
  digitalWrite(enableB, HIGH);
}
void aceleracao(int modo){
  if(modo = 1){
    analogWrite(enableA, 40);
    analogWrite(enableB, 40);
}
  else if(modo = 2){
    analogWrite(enableA, 70);
    analogWrite(enableB, 70);
}
  else if(modo = 3){
    analogWrite(enableA, 100);
    analogWrite(enableB, 100);
  }
}
void frente(){
  // Configura o movimento para frente
  digitalWrite(INT1, LOW);
  digitalWrite(INT2, HIGH);
  digitalWrite(INT3, HIGH);
  digitalWrite(INT4, LOW);
}

void esquerda(){
  // Configura o movimento para a esquerda
  digitalWrite(INT1, LOW);
  digitalWrite(INT2, HIGH);
  digitalWrite(INT3, LOW);
  digitalWrite(INT4, LOW);
}

void direita(){
  // Configura o movimento para a direita
  digitalWrite(INT1, LOW);
  digitalWrite(INT2, LOW);
  digitalWrite(INT3, HIGH);
  digitalWrite(INT4, LOW);
}

void parar(){
  // Adicione a função stop para parar o robô se necessário
  digitalWrite(INT1, LOW);
  digitalWrite(INT2, LOW);
  digitalWrite(INT3, LOW);
  digitalWrite(INT4, LOW);
}
