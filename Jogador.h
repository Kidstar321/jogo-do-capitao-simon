#pragma once
#include "Personagem.h"
class Jogador :
    public Personagem
{
    private:
        // deixei aquele circulo como o jogaddor para comecar 
    sf::CircleShape circulo;

    public:
        Jogador();
        void mover();
        void executar();
        void salvar();
        sf::CircleShape& getCirculo() { return circulo; }


};


