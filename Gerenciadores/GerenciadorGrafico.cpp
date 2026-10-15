#include "GerenciadorGrafico.h"


GerenciadorGrafico::GerenciadorGrafico(): 
    window(new sf::RenderWindow(sf::VideoMode(W_LARGURA,W_ALTURA),NOME_JOGO))
{
    if(!window)
    {
        std::cout << "Erro ao criar janela" << std::endl;
        exit(1);
    }
    window->setFramerateLimit(MAX_FPS);
}
GerenciadorGrafico::~GerenciadorGrafico()
{
    if (window)
    {
        delete window;
        window = nullptr;
    }
}
void GerenciadorGrafico::desenharEnte(Ente* pE)
{
    // TODO: implementar quando a classe Ente existir, possivelmente suas herdeiras tambem (tem q ver isso ai)
}
