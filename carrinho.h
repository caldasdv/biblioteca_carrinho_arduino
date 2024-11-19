// carrinho.h
#ifndef CARRINHO_H
#define CARRINHO_H

// Pin definitions
#define INT1 2
#define INT2 3
#define INT3 4
#define INT4 5
#define enableA 9
#define enableB 10

// Function prototypes
void inicializarCarrinho();
void aceleracao(int modo);
void frente();
void esquerda();
void direita();
void parar();

#endif