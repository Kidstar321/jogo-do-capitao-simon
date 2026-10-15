#pragma once
#include "../Gerenciadores/GerenciadorGrafico.h"

class Jogo
{
    private:
        GerenciadorGrafico GG;

    public:
        Jogo();
        ~Jogo();
        void executar();
        

};