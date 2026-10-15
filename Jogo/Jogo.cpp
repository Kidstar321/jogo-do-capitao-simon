#include "Jogo.h"

Jogo::Jogo(): GG()
{
}
Jogo::~Jogo()
{
}
void Jogo::executar()
{
    while(GG.getWindow()->isOpen())
    {
        //Gerenciador de eventos esta na execucao para testes, provavelmente saira daqui depois
        sf::Event event;
        while(GG.getWindow()->pollEvent(event))
        {
            if(event.type == sf::Event::Closed)
                GG.getWindow()->close();
        }

        GG.getWindow()->clear(sf::Color::Black);
        sf::CircleShape circulo(50.f);
        circulo.setFillColor(sf::Color::Green);
        circulo.setPosition(375.f, 275.f);
        GG.getWindow()->draw(circulo);

        GG.getWindow()->display();
    }
}