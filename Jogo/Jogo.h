#pragma once
#include "../Gerenciadores/GerenciadorGrafico.h"
#include "Jogador.h"

class Jogo
{
    private:
        GerenciadorGrafico GG;
        Jogador jogador;
    public:
        Jogo();
        ~Jogo();
        void executar();
        

};
