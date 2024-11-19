#include "carrinho.h"

void setup() {
    inicializarCarrinho();
}

void loop() {
    aceleracao(2);  // Velocidade média
    frente();       // Mover para frente
    delay(1000);    // Mover por 1 segundo
    parar();        // Parar
}