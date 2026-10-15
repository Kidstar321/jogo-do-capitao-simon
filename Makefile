all:
	g++ -c Gerenciadores/*.cpp Jogo/*.cpp
	g++ *.o -Wall -o jogo -lsfml-graphics -lsfml-window -lsfml-system
	rm -f *.o